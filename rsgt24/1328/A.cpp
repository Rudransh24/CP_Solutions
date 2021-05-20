#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long

int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
              int a,b;cin>>a>>b;
              int count=0;
              int x=a%b;
              if(x==0)
              cout<<"0"<<endl;
              else
              cout<<b-x<<endl;
    }
    return 0;
}