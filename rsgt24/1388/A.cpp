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
        int n;
        cin>>n;
        int sum=0;
        n-=6;
        n-=10;
        if(n-14==6||n-14==10||n-14==14)
        {
            n-=15;
            if(n>0)
            {
                cout<<"YES"<<"\n";
                cout<<n<<" "<<6<<" "<<10<<" "<<15<<"\n";
            }
            else
            cout<<"NO"<<"\n";
        }
        else
        {
            n-=14;
            if(n>0)
            {
                cout<<"YES"<<"\n";
                cout<<n<<" "<<6<<" "<<10<<" "<<14<<"\n";
            }
            else
            cout<<"NO"<<"\n";
        }
        
        
        
    }
    return 0;
}