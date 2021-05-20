#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back

int32_t main()
{
    fastio
    int n,t;
    cin>>n>>t;
    
    int ar[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int flag=0;
    
    for(int i=0;i<n;i++)
    {
        if(ar[i]>=0)
        {
            ar[i]=0;
            continue;
        }
        else
        {
            flag=1;
            break;
        }
        
    }
    int sum=0;
    if(flag==0)
    cout<<0<<endl;
    else
    {
        for(int i=0;i<t;i++)
        {
            int *min_1=min_element(ar,ar+n);
            sum-=*min_1;
            for(int i=0;i<n;i++)
            {
                if(ar[i]==*min_1)
                ar[i]=0;
            }
        }
        
        cout<<sum<<"\n";
    }
    return 0;
}