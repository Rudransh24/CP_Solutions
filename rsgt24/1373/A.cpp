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

bool isPrime(int n) 
{
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}



int32_t main(void)
{
    fastio
    int t=1;
    cin>>t;
    while(t--)
    {
        int n,m,a,b,c,p,z;
        string s;
        cin>>a>>b>>c;
        //int ar[n];
        //for(int i=0;i<n;i++)
        //cin>>ar[i];
        int q=a,w=c;
        int e=a*b,r=c;
        
        int res1,res2;
        
        if(q<w)
        res1=1;
        else 
        res1=-1;
        
        if(e>r)
        res2=b;
        else
        res2=-1;
        
        cout<<res1<<" "<<res2<<"\n";
        
        
    }
    return 0;
}