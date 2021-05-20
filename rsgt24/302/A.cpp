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
        int n,m;
        cin>>n>>m;
        
        int a[n+3];
        int ind1=0,ind2=0;
        int cnt=INT_MAX;
        int count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
                  cin>>a[i];
                  if(a[i]==1)
                  count1++;
                  else 
                  count2++;
        }
        
        while(m--)
        {
                  int l,r;
                  cin>>l>>r;
                  
                  if((r-l+1)%2==0)
                  {
                    int x=(r-l+1)/2;
                    //cout<<x<<"\n";
                    int y=count1-x;
                    int z=count2-x;
                    //cout<<y<<" "<<z<<"\n";
                    if(y>=0&&z>=0)
                    cout<<1<<"\n";
                    else 
                    cout<<0<<"\n";
                  }
                  else
                  cout<<0<<"\n";
        }
        
    }
    return 0;
}