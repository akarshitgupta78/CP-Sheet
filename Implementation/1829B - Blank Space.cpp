#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int mx=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==0) 
        {
            cnt++;
            mx=max(mx,cnt);
        }
        else cnt=0;
    }
    cout<<mx<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
