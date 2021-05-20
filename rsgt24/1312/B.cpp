#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(void)
{
          int t;
          cin>>t;
          while(t--)
          {
                    int n;
                    cin>>n;
                    int ar[n];
                    for(int i=0;i<n;i++)
                    cin>>ar[i];
                    sort(ar,ar+n,greater<int>());
                    for(int i=0;i<n;i++)
                    cout<<ar[i]<<" ";
                    cout<<endl;
                    
          }
          return 0;
}