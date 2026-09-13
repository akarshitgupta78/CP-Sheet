#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        m[a]++;
    }
    if(m.size()==1) cout<<"YES"<<endl;
    else if(m.size()>2) cout<<"NO"<<endl;
    else
    {
        auto it=m.begin();
        int a=it->second;
        it++;
        int b=it->second;
        if(abs(a-b)<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
