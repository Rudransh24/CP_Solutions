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
#define int unsigned long long int
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

bool isPowerOfTwo (int x)  
{ 
    return x && (!(x&(x-1)));  
}  
int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        
        cin>>a>>b;
        
        if(a==b)
        {
            cout<<0<<"\n";
            continue;
        }
        
        int count=0;
        if(a>b)
        {
            while(b<a)
            {
                b=b<<1;
                count++;
            }
            
            if(b==a)
            if(count%3==0)
            cout<<count/3<<"\n";
            else
            cout<<count/3+1<<"\n";
            else
            cout<<-1<<"\n";
        }
        else
        {
            while(a<b)
            {
                a=a<<1;
                count++;
            }
            
            if(b==a)
            if(count%3==0)
            cout<<count/3<<"\n";
            else
            cout<<count/3+1<<"\n";
            else
            cout<<-1<<"\n";
        }
        
    }
    return 0;
}