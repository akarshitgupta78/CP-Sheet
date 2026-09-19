#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> a(n);
    int total=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==2)
            total++;
    }

    int curr=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]==2)
            curr++;

        if(curr==total-curr)
        {
            cout<<i+1<<endl;
            return;
        }
    }

    cout<<-1<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
