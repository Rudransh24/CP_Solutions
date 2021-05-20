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
        string x;
        cin>>x;
        string z="";
        string y="";
        int n=x.size();
        
        int flag=1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(x[i]==x[j])
                continue;
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        
        int cnt=1;
        if(flag==1)
        cout<<x<<"\n";
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(x[i]==x[j])
                    continue;
                    else
                    {
                        z=z+x[i]+x[j];
                        cnt=0;
                        break;
                    }
                }
                if(cnt==0)
                break;
            }
            //cout<<z<<"\n";
            for(int i=0;i<n;i++)
            cout<<z;
            cout<<"\n";
        }
        
        
       
    }
    return 0;
}