#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int unsigned long long int

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
        string x[9];
        int n=9;
        for(int i=0;i<n;i++)
        cin>>x[i];
        
        x[0][0]=x[0][1];
        x[1][1]=x[1][2];
        x[2][2]=x[2][3];
        x[3][3]=x[3][4];
        x[4][4]=x[4][5];
        x[5][5]=x[5][6];
        x[6][6]=x[6][7];
        x[7][7]=x[7][8];
        x[8][8]=x[8][7];
        
        for(int i=0;i<n;i++)
        cout<<x[i]<<endl;
    }
        
    return 0;
}