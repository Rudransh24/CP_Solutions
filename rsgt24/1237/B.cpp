#include<bits/stdc++.h>
using namespace std;
#define int long long

int x[1000005]; //yeh batata hai konsi tunnel se pehli nikli iska index number batata hai

int32_t main(void)
{
          int n;
          cin>>n;
          int a[n+1],b[n+1];
          for(int i=1;i<n+1;i++)
          {
                    cin>>a[i];
          }
          int count=0;
          for(int i=1;i<n+1;i++)
          {
                    cin>>b[i];
                    x[b[i]]=i;
          }
          int max1=0;
          for(int i=1;i<n+1;i++)
          {
                    if(x[a[i]]<max1)
                    count++;
                    max1=max(max1,x[a[i]]);
          }
          
          cout<<count<<"\n";
          return 0;
}