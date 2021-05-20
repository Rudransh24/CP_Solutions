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
#define mpp make_pair
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
        int n,k;
        cin>>n;
        int ar[n+1]={INT_MAX};
        set<int> s;
        
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            s.insert(ar[i]);
        }
    
        if(s.size()==1)
        {
            cout<<0<<"\n";
            continue;
        }
        int pos=-1;
        int min_1=INT_MAX;
        int count=0;
        
        for(int i=0;i<n-1;i++)
        {
            if(ar[i]>ar[i+1])
            {
                count+=ar[i]-ar[i+1];
            }
        }
        
        cout<<count<<"\n";
        
    
    }
    return 0;
}