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

int32_t main(void)
{
    fastio
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t=1;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        //int ar[n];
        
        //for(int i=0;i<n;i++)
        //cin>ar[i];
        
        if(k==1)
        {
            cout<<n<<"\n";
            continue;
        }
        
        int ans=n;
        
        for(int i=1;i<k;i++)
        {
            string x=to_string(n);
            sort(x.begin(), x.end());
            
            int max_1=x[x.size()-1]-'0',min_1=x[0]-'0';
            
            if(x[0]=='0')
            break;
            //cout<<x<<" ";
            //cout<<max_1<<" "<<min_1<<"\n";
            ans=ans+max_1*min_1;
            n=n+max_1*min_1;
        }
        
        cout<<ans<<"\n";
        
    }
  
    return 0;
   
 }