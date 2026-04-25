#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		int n;
		char c;
		cin >> n >> c; 
		string s;
		cin >> s;
		//! Check if 0 operations are needed
		bool check0 = true;
		for (int i = 0; i < n; i++)
		{
			if (s[i] != c)
			{
				check0 = false; 
				break;
			}
		} 
		if (check0)
		{
			cout << "0
"; 
			continue;
		}
		//! Check if 1 operation is enough
		int val1 = -1;
		for (long long i = 2; i <= n; i++)
		{
			bool isPoss = true;
			for (long long j = i; j <= n; j += i)
			{
				if (s[j - 1] != c)
				{
					isPoss = false; 
					break;
				}
			}
			if (isPoss)
			{
				val1 = i; 
				break;
			}
		} 
		if (val1 != -1)
		{
			cout << "1
";
			cout << val1 << "
"; 
			continue;
		}
		cout << "2
";
		cout << n - 1 << " " << n << "
"; 
	}
	return 0;
}