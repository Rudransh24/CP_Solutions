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

class Geeks{ 
  
    public: 
        Geeks(){ 
            cout<<"s"; 
        } 
         
}; 

bool isPerfectSquare(long double x) 
{   
  // Find floating point value of  
  // square root of x. 
  long double sr = sqrt(x); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
} 
int32_t main(void)
{
    fastio(true);
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string ccc="codeforces";
        char v='s';
        if(n==1)
        {
            cout<<ccc<<"\n";
        }
        else
        {
            
        
        int q,w;
        if(isPerfectSquare(n))
        {
            for(int i=0;i<sqrt(n)-1;i++)
            cout<<'c';
            cout<<ccc;
            for(int i=0;i<sqrt(n)-1;i++)
            cout<<'s';
        }
        else
        {
            n=n-1;
            cout<<ccc;
            for(int i=0;i<n;i++)
            cout<<'s';
        }
        
        }
    }
    return 0;
}