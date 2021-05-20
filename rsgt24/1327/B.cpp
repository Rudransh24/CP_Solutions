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
        int n,k,j,z,i;cin>>n;
        int x,y;
        int set[n+1]={0};
        int set1[n+1]={0};
        for(i=1;i<=n;i++)
        {
                  cin>>k;
                  int ar[k+1];
                  for(j=1;j<=k;j++)
                  {
                       cin>>ar[j];
                  }
                  for(z=1;z<=k;z++)
                  {
                            if(set[ar[z]]==0)
                            {
                                      set[ar[z]]=ar[z];
                                      break;
                            }
                  }
                if(z==k+1)
                x=i;
                  
                  
                  
        }
    
        
        
        for(i=1;i<=n;i++)
        {
            if(set[i]==0)
            {
                y=i;
                break;
            }
        }
        
        if(i==n+1)
        cout<<"OPTIMAL"<<"\n";
        else
        {
            cout<<"IMPROVE"<<"\n";
            cout<<x<<" "<<y<<"\n";
        }
        
        
        
    }
    return 0;
}