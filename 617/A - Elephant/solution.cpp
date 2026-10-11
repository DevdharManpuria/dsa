// Online C++ compiler (editor)
// Write and run C++ online using this editor.
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Write C++ code here
    long long x;
    cin >> x;
    long long ans=0;
    ans+=x/5;
    bool rem = (x%5 == 0);
    cout << ans+(rem == false ? 1 : 0);
    return 0;
}