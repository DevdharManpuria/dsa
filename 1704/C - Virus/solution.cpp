#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> v(m);
        for(int i=0;i<m;i++)
            cin >> v[i];
        sort(v.begin(),v.end());
        vector<int> gaps;
        for(int i=0;i<m-1;i++)
            gaps.push_back(v[i+1] - v[i] - 1);
        gaps.push_back(v[0] + n - v[m-1] - 1);
        sort(gaps.rbegin(),gaps.rend());
        int save=0,day=0;
        for(auto gap:gaps){
            int curr = gap - 2*day;
            if(curr>0){
                save++;
                curr-=2;
                if(curr>0)
                    save+=curr;
                day+=2;
            }
        }
        cout << (n-save) << "
";
    }
    return 0;
}