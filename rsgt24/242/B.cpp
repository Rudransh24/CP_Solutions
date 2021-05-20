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
    int t;
    cin>>t;
    int a[t],b[t];
    int i=0;
    while(t--)
    {
        cin>>a[i]>>b[i];
        i++;
    }
    
    int *min_1=min_element(a,a+i);
    int *max_1=max_element(b,b+i);
    int z=*min_1,x=*max_1;
    
    int flag=0;
    
    for(int j=0;j<i;j++)
    {
        if(a[j]==z&&b[j]==x)
        {
            cout<<j+1<<"\n";
            flag=1;
            break;
        }
    }
    
    if(flag==0)
    cout<<-1<<"\n";
    
    return 0;
}