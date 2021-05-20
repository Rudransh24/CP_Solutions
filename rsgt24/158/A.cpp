#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long

int32_t main(void)
{
        
                   int k,n;
                   cin>>n>>k;
                   int ar[n];
                   for(int i=0;i<n;i++)
                   cin>>ar[i];
                   int x=ar[k-1];
                   int count=0;
                   for(int i=0;i<n;i++)
                   if(ar[i]>=x&&ar[i]>0)
                   count++;
                   cout<<count<<endl;
          
    return 0;
}