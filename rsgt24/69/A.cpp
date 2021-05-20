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
    int ar[n]={0};
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++)
    {
              for(int j=0;j<3;j++)
              {
                    cin>>ar[j];
                    if(j==0)
                    a=a+ar[j];
                    if(j==1)
                    b=b+ar[j];
                    if(j==2)
                    c=c+ar[j];
              }
    }
    //cout<<a<<b<<c<<endl;
    
    if(a==b&&b==c&&a==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}