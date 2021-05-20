#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
 
int32_t main(void)
{
    fastio
    int t,n;
    cin>>n>>t;
    int s[n+1]={0},d[n+1]={0};
    int i;
    int x;
    int flag=0;
    for(i=1;i<=n;i++)
    {
        flag=0;
        cin>>s[i]>>d[i];
        if(s[i]==t)
        {
            x=i;
            flag=1;
            break;
        }
        while(s[i]<t)
        s[i]=s[i]+d[i];
    }
    
    /*for(i=1;i<=n;i++)
    cout<<s[i]<<" ";
    cout<<endl;*/
    
    if(flag==1)
    {
        cout<<x<<endl;
    }
    else
    {
    
            int *p=min_element(s+1,s+n+1);
            int z=*p;
            for(int i=1;i<=n;i++)
            if(s[i]==z)
            {
                cout<<i;
                break;
            }
            cout<<endl;
    }
    
    return 0;
}