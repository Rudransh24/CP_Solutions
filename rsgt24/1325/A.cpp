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
                    if(n%2==0)
                    cout<<n/2<<" "<<n/2<<"\n";
                    else
                    cout<<"1"<<" "<<n-1<<"\n";
          }
          return 0;
}