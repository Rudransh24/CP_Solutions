#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
int32_t main(void)
{
    fastio
    int n;
    cin>>n;
    int ar[12]={4,7,47,74,477,747,774,447,474,744,444,777};
    int flag=1;
    for(int i=0;i<12;i++)
    if(n%ar[i]==0)
          {
              flag=1;
              break;
          }
    else
    flag=0;
    if(flag==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}