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
    cin>>t;
    while(t--)
    {
        string x;
        cin>>x;
        int min=0,plus=0;
        for(int i=0;i<x.size();i++)
        if(x[i]=='-')
        min++;
        else
        plus++;
        int n=x.size();
        
        if(min==x.size())
        {
            cout<<n*n<<"\n";
            continue;
        }
        if(plus==x.size())
        {
            cout<<x.size()<<"\n";
            continue;
        }
  
        if(x[0]=='-')
        {
            int cnt=1;
            for(int i=0;i<x.size();i++)
            {
                if(x[i]=='+')
                break;
                else
                cnt++;
            }
            int ans=0;
            for(int i=1;i<=cnt;i++)
            {
                if(i==cnt)
                ans+=(i+1);
                else
                ans+=i;
            }
            cout<<ans<<"\n";
            continue;
        }
        
        if(x[0]=='+')
        {
            int cnt=1;
            int ans=0;
            for(int i=1;i<=plus;i++)
            {
                ans+=i;
                //cout<<ans<<"\n";
            }
            cout<<ans<<"\n";
            continue;
        }
        
        
    }
    return 0;
}