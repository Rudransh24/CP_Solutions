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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string x=to_string(n);
        vector<string> v;
        int count=1;
        for(int i=1;i<x.size();i++)
        {
            if(x[i]=='0')
            count++;
        }
        if(count==x.size())
        {
            cout<<1<<"\n";
            cout<<n<<"\n";
            continue;
        }
        int sum=0;
        for(int i=0;i<x.size();i++)
        {
            string z="";
            int d=x.size()-i-1;
            if(x[i]=='0')
            continue;
            z=z+x[i];
            while(d)
            {
                z=z+'0';
                d--;
            }
            v.pb(z);
            sum++;
        }
        cout<<sum<<"\n";
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<"\n";
        
    }
   return 0;
   
 }