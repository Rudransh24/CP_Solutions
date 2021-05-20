#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
 
/*int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
 
int powermod(int A, int p, int MOD = mod){
    A%=MOD;
    int res  = 1;
    while(p){
        if(p&1)
            res = ((__int128)res*A)%MOD;
        
        A = ((__int128)A*A)%MOD;
        p>>=1;
    }
 
    return res;
}*/
int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int p[n],c[n];
        for(int i=0;i<n;i++)
        cin>>p[i]>>c[i];
        
        int flag=1;
        if(n==1)
        {
                  if(p[0]>=c[0])
                  cout<<"YES"<<"\n";
                  else
                  cout<<"NO"<<"\n";
                  
                  continue;
        }
        for(int i=1;i<n;i++)
        {
            if(p[i]>=p[i-1]&&c[i]>=c[i-1]&&p[i-1]>=c[i-1]&&p[i]>=c[i])
            {
                if(p[i]==p[i-1]&&c[i]!=c[i-1])
                {
                    flag=0;
                    break;
                }
                else
                continue;
                
            }
                
            else
            {
                      flag=0;
                      break;
            }
        }
        
        if(flag==0)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
        
    }
    return 0;
}