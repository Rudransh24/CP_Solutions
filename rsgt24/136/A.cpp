#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n;
          cin>>n;
          int ar[n];
          for(int i=0;i<n;i++)
          cin>>ar[i];
          map<int,int>map;
          for(int i=0;i<n;i++)
          {
                    map[ar[i]-1]=i+1;
          }
          
          for(int i=0;i<n;i++)
          cout<<map[i]<<" ";
          cout<<endl;
          return 0;
}