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
        int n;
        cin>>n;
        int a[n],b[n];
        set<int> s1,s2;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int min_1=*min_element(a,a+n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int min_11=*min_element(b,b+n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int a1=abs(a[i]-min_1);
            int a2=abs(b[i]-min_11);
            ans+=max(a1,a2);
        }
        
        cout<<ans<<"\n";
        
        
        
    }
    return 0;
}