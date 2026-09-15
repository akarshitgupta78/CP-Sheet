#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    bool found=false;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==k)
        {
            found=true;
            break;
        }
    }
    if(found) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
