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
#define int long long int
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define d(x) cout<<x<<"\n"
#define ff first
#define ss second
#define rep(i,n) for(int i=0;i<n;i++)

namespace {
inline void fastio(bool use_fast_io) {
        if (use_fast_io) {
            cin.tie(0);
            cout.tie(0);
            cin.sync_with_stdio(0);
            cout.sync_with_stdio(0);
        }
    }
} 

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
    fastio(true);
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,k;
        cin>>a>>b>>n;
        int x=a;
        int y=b;
        int ca=0,cb=0;
        while(a<=n||b<=n)
        {
            if(ca%2==0)
            a+=b;
            else
            b+=a;
            ca++;
        }
        while(x<=n||y<=n)
        {
            if(cb%2==0)
            y+=x;
            else
            x+=y;
            cb++;
        }
        cout<<min(ca-1,cb-1)<<"\n";
        
        
        
        
        
    }
    return 0;
}