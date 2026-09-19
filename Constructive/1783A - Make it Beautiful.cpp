#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];
    if(v[0]==v[n-1])
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    cout<<v[n-1]<<" ";
    for(int i=0;i<n-1;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
