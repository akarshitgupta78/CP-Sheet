#include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {
     int m, n;
     cin>>m>>n;
     int flag=1;
     for(int i=0;i<m;i++)
     {
         if(i%2==0)
         {
             for(int j=0;j<n;j++)cout<<"#";
             cout<<endl;
         }
         else if(flag==0)
         {
             cout<<"#";
             for(int j=1;j<n;j++)cout<<".";
             flag=1;
             cout<<endl;
         }
         else
         {
             for(int j=0;j<n-1;j++)cout<<".";
             cout<<"#";
             flag=0;
             cout<< endl;
         }
     }
     return 0;
 }
