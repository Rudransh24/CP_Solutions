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
#define lb lower_bound

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

bool inRange(unsigned low, unsigned high, unsigned x) 
{ 
    return  ((x-low) <= (high-low)); 
}

int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int x=a-b;
        int y=a+b;
        int q=c-d;
        int w=c+d;
        int flag=0;
        
        int m=x*n;
        int v=y*n;
        
        if((v>=q)&&(m<=w))
        cout<<"Yes"<<"\n";
        else
        cout<<"No"<<"\n";
        
    }
    
    return 0;
}