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
    int n,k;
    cin>>n>>k;
    
    vector<int> v;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    
    sort(v.begin(),v.end());
    
    
    int x;
    if(k==0)
    {
        x=v[0];
        if(x==1)
        cout<<-1<<"\n";
        else
        cout<<x-1<<"\n";
        
        return 0;
    }
    else
    x=v[k-1];
    
    int flag=0;
    int count=0;
    
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=x)
        count++;
    }
    
    if(count==k)
    cout<<x<<"\n";
    else
    cout<<-1<<"\n";
    
    return 0;
}