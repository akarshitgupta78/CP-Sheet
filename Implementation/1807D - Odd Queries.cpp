#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long n,q;
    cin >> n >> q;
    vector<long long> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
        
    long long sum=0;
    for(int i=0;i<n;i++)
        sum+=v[i];

    vector<long long> pre(n+1,0);
    for(int i=1;i<=n;i++)
        pre[i]=pre[i-1]+v[i-1];

    while(q--)
    {
        long long l,r,k;
        cin>>l>>r>>k;
        long long total=sum-(pre[r]-pre[l-1])+(r-l+1)*k;
        if(total%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
