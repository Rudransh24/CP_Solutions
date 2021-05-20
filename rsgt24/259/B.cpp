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
    int ar[3][3];
    
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    cin>>ar[i][j];
    
    ar[2][2]=(ar[0][1]+ar[1][0])/2;
    ar[1][1]=(ar[0][2]+ar[2][0])/2;
    ar[0][0]=(ar[2][1]+ar[1][2])/2;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}