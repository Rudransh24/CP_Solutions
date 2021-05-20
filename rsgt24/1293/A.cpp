#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int unsigned long long int 

int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,k;
        cin>>n>>s>>k;
        int ar[k+1];
        map<int,int>map;
        for(int i=1;i<k+1;i++)
        {
                  cin>>ar[i];
                  map[ar[i]]=ar[i];
        }
       
        //set[s]=-1;
       /*for(int i=1;i<n+1;i++)
       cout<<map[i]<<" ";
       cout<<endl;*/
       int x=INT_MAX,y=INT_MAX;
       int count=0;
       for(int i=s;i>=1;i--)
       {
                 if(map[i]==0)
                 {
                          
                              y=s-i;
                              //cout<<y<<endl;
                              break;
                          
                 }
       }
       for(int i=s;i<=n;i++)
       {
                 if(map[i]==0)
                 {
                              x=i-s;
                              //cout<<x<<endl;
                              break;
                 }
       }
       
       
       cout<<min(x,y)<<endl;
        
        
    }
    
    return 0;
}