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

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

/*int powermod(int A, int p, int MOD = M){
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
        int ar[3];
        for(int i=0;i<3;i++)
        cin>>ar[i];
        sort(ar,ar+3);
        int count=0;
        int max_1=INT_MIN;
        int min_1=INT_MAX;
        for(int i=0;i<3;i++)
        {
            max_1=max(ar[i],max_1);
            min_1=min(ar[i],min_1);
        }
        
        for(int i=0;i<3;i++)
        {
            if(ar[i]==max_1)
            count++;
        }
        
        if(count>=2)
        {
            cout<<"YES"<<"\n";
            cout<<min_1<<" "<<min_1<<" "<<max_1<<"\n";
        }
        else
        cout<<"NO"<<"\n";
    }
    
    return 0;
}