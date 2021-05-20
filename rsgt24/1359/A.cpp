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
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,m,k;
        cin>>n>>m>>k;
        int x=n/k;
        int count=0,flag=0,sum=0;
        int max_1=INT_MIN,min_1=INT_MAX;
        if(m==0)
        {
            cout<<0<<"\n";
            continue;
        }
        int y=m/k;
        
        if(n==m||(n%m==0&&m!=k))
        {
            cout<<0<<"\n";
        }
        else
        if(m<=x)
        {
            cout<<m<<"\n";
        }
        else
        {
            int z=m-x;
            if(z<x)
            cout<<x-z<<"\n";
            else
            {
                      cout<<1<<"\n";
            }
        }
        
        
        
        
    }
    return 0;
}