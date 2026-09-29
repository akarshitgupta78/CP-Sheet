#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n; 
    vector<int> v(n);
    map<long long, long long> m; 
    for (int i = 0;i<n;i++)
    {
        cin>>v[i]; 
        v[i]-=i;
        m[v[i]]++;
    } 
    long long ans = 0; 
    for(auto &[val,cnt]:m)
    {
        ans += ((cnt)*(cnt-1)) / 2; 
    }
    cout<<ans<<endl;;  
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
