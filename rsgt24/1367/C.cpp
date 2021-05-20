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
        int n,k;
        cin>>n>>k;
        string x;
        cin>>x;
        int ans=0,check1=0,check0=0;
        for(int i=0;i<x.size();i++)
        {
            
            int flag=0;
            for(int j=i+1;j<i+k+1;j++)
            {
                if(x[j]=='0')
                continue;
                else if(x[j]=='1')
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
            continue;
            flag=0;
            for(int j=i-k;j<i+1;j++)
            {
                if(x[j]=='0')
                continue;
                else if(x[j]=='1')
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
            continue;
            else
            {
                x[i]='1';
                //cout<<x<<"\n";
                ans++;
            }
            
        }
        
        //cout<<x<<"\n";
        cout<<ans<<"\n";
        
    }
    return 0;
}