/******

AUTHOR : RUDRANSH TRIPATHI, IIIT NAGPUR, CCID(rt24) & CFID(rsgt24)

MOTTO : Use criticism as fuel and you will never run out of energy.
        AIM : TO BECOME A BETTER CODER
        INTROSPECT + COURSE CORRECTIONS = CATALYST FOR SUCCESS
        Every moment is an opportunity to better yourself
        
*******/

#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define mp make_pair
#define d(x) cout<<x<<"\n"

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
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int cnt;
        int a[n],b[n];
        int i,j;
        int a1,b1;
        for(i=0;i<n;i++)
        {
                    cin>>a1>>b1;
                    a[i]=min(a1,b1);
                    b[i]=max(a1,b1);
        }
        int ans=0;
        for(i=0;i<n;i++)
        {
                  if(a[i]<=x&&x<=b[i])
                  continue;
                  else
                  {
                            ans+=min(abs(a[i]-x),abs(b[i]-x));
                            if(x<a[i])
                            x=a[i]-x;
                            else if(x>b[i])
                            x=x-b[i];
                  }
        }
        
        cout<<ans<<"\n";
        
    }
    return 0;
}