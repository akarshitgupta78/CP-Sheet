#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin>>n>>k; 
    vector<long long> v(n);
    for (int i = 0;i<n;i++) 
        cin>>v[i];
    sort(v.begin(), v.end());

    long long cnt=1,mx=1;
    for (int i = 1;i<n;i++) 
    {
        if (v[i] - v[i-1] <= k) cnt++; 
        else cnt=1; 
        mx = max(mx,cnt);
    }
    cout<<n-mx<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
        solve();
    return 0;
}
