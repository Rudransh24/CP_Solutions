#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main(void)
{
 
 
int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++)
cin>>ar[i];
int max1=0;
int sum=0;
int b[n];
int y=0;
for(int i=0;i<n;i++)
{         
          if(ar[i]<max1)
          {
                    max1=max(max1,ar[i]);
                    y=sum;
                    b[i]=y+ar[i]+max1;
                    continue;
          }
          
          sum=sum+ar[i];
          b[i]=sum+max1;
}
for(int i=0;i<n;i++)
cout<<b[i]<<" ";
 
return 0;
}