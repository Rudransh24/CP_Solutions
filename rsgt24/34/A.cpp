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

int glob=0;

int32_t main(void)
{
    fastio
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        
        int a[n+3];
        int ind1=0,ind2=0;
        int cnt=INT_MAX;
        for(int i=1;i<=n;i++)
        cin>>a[i];
        
        
        for(int i=1;i<=n;i++)
        {
          if(i==1&&abs(a[i]-a[i+1])<cnt)
          {
                    cnt=abs(a[i]-a[i+1]);
                    ind1=i;
                    ind2=i+1;
          }
          if(i==1&&abs(a[i]-a[n])<cnt)
          {
                    cnt=abs(a[i]-a[n]);
                    ind1=i;
                    ind2=n;
          }
          if(i==n&&abs(a[n]-a[n-1])<cnt)
          {
                    cnt=abs(a[n-1]-a[n]);
                    ind1=n-1;
                    ind2=n;
          }
          if(i==n&&abs(a[n]-a[1])<cnt)
          {
                    cnt=abs(a[1]-a[n]);
                    ind1=1;
                    ind2=n;
          }
          if(i!=n&&i!=1&&abs(a[i]-a[i+1])<cnt)
          {
                    cnt=abs(a[i]-a[i+1]);
                    ind1=i;
                    ind2=i+1;
          }
          if(i!=n&&i!=1&&abs(a[i]-a[i-1])<cnt)
          {
                    cnt=abs(a[i]-a[i-1]);
                    ind1=i;
                    ind2=i-1;
          }
          
        }
        
        cout<<ind1<<" "<<ind2<<"\n";
        
        
    }
    return 0;
}