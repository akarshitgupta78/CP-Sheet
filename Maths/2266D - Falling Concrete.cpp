#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin>>n;
    set<long long> s;
    for (int i = 1;i<=n;i++) 
    {
        long long a;
        cin >> a;
        s.insert(a-i);
    }
    int ans=0,cur=0;
    long long prev = LLONG_MIN;
    for (long long x:s) 
    {
        if (x == prev+1) cur++;
        else  cur = 1;

        ans = max(ans,cur);
        prev = x;
    }
    cout<<ans<<endl;
}
int main() 
{
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}
