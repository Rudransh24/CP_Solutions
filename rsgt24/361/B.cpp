#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

void pa(int ar[],int n)
{
    for(int i=1;i<=n;i++)
    cout<<ar[i]<<" ";
    cout<<"\n";
}

int32_t main()
{
    fastio
    int n,m;
    cin>>n>>m;
    
    int ar[n+1];
    
    for(int i=1;i<=n;i++)
    ar[i]=1;
    
    if(m==n)
    {
        cout<<-1<<"\n";
        exit(0);
    }
    
        if(m==1)
        {
            ar[n]=n;
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                if(i!=1&&m)
                {
                    ar[i]=i;
                    m--;
                }
            }
        }
        
        pa(ar,n);
    return 0;
}