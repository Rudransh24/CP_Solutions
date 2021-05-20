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

int32_t main(void)
{
    fastio
    int n;
    cin>>n;
    vector<int> odd,even;
    if(n==1)
    {
        cout<<1<<"\n";
        cout<<1<<"\n";
    }
    else if(n==2)
    {
        cout<<1<<"\n";
        cout<<2<<"\n";
    }
    else if(n==3)
    {
        cout<<2<<"\n";
        cout<<1<<" "<<3<<"\n";
    }
    else
    {
        cout<<n<<"\n";
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
            odd.pb(i);
            else
            even.pb(i);
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end(),greater<int>());
        
        for(int i=0;i<odd.size();i++)
        cout<<odd[i]<<" ";
        for(int i=0;i<even.size();i++)
        cout<<even[i]<<" ";
        
        cout<<"\n";
        
    }
    return 0;
}