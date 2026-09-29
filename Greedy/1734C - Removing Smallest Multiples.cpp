#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n; 
    string s;
    cin>>s;
    long long ans = 0; 
    vector<int> v(n+1,0);

    for (int i = 1;i<=n;i++)
    {
        for (int j = i;j<=n;j+=i)
        {
            if(s[j-1] == '1') break;

            if(v[j]) continue;
            else
            {
                v[j] = 1;
                ans += i;
            }
        }
    } 
    cout<<ans<<endl; 
}

int main()
{
    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}
