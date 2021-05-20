#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int x,n,m;
        cin>>x>>n>>m;
        int flag=0;
        while(1)
        {
            int z=m*10;
            int c=x-z;
            if(c==0||c<0)
            {
                flag=1;
                break;
            }
            for(int i=0;i<n;i++)
            {
                x=x/2+10;
                if(x<0||x==0)
                {
                    flag=1;
                    break;
                }
                
            }
            x=x-z;
            break;
            
        }
        //cout<<x<<endl;
        if(flag==1||x<0||x==0)
        cout<<"yes"<<"\n";
        else
        cout<<"no"<<"\n";
        
    }
    return 0;
}