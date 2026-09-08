#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v(5,vector<int> (5));
    int m,n;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>v[i][j];
            if(v[i][j]) m=i,n=j;
        }
    }
    cout<< abs(m-2)+ abs(n-2);
    return 0;
}
