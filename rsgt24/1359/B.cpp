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
  x:  while(t--)
    {
        int a,b,n,m,k,x,y;
        cin>>n>>m>>x>>y;
        char ar[n][m];
        int count=0,flag=0,sum=0,sum1=0,sum2=0;
        int max_1=INT_MIN,min_1=INT_MAX;
    
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ar[i][j];
            }
        }
        
        if(m==1)
        {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ar[i][j]=='.')
                sum+=x;
            }
        }
        
        cout<<sum<<"\n";
        goto x;
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ar[i][j]=='.')
                sum+=x;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((ar[i][j]=='.')&&(ar[i][j+1]=='.'))
                {
                    sum2+=y;
                    j++;
                }
                else
                if(ar[i][j]=='.')
                sum2+=x;
            }
        }
        
        //cout<<sum<<" "<<sum1<<" "<<sum2<<"\n";
        if(sum2==0)
        cout<<sum<<"\n";
        else if(sum==0)
        cout<<sum2<<"\n";
        else
        cout<<min({sum,sum2})<<"\n";
        
    }
    return 0;
}