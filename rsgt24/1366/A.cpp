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

int main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,p,q,r,n,m;
        //cin>>p;
        //cin>>q;
        //cin>>r;
        cin>>a;
        cin>>b;
        //cin>>c;
    //  //  cin>>n;
       // cin>>m;
        
        int ar[n];
        int min_1=INT_MAX,max_1=INT_MIN,sum=0,sum1=0,ce=0,co=0;
        //for(int i=0;i<n;i++)
        //cin>>ar[i];
        
        if(a==0||b==0||(a==1&&b==1))
        {
            cout<<0<<"\n";
            continue;
        }
        int x=(a+b)/3;
        
        if(min(a,b)<x)
        cout<<min(a,b)<<"\n";
        else
        cout<<x<<"\n";
        
        
        
    }
    return 0;
}