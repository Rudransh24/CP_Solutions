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
        int n,m;
        cin>>n>>m;
        char ar[n][m];
        if(n>=m)
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(i==j||i>j)
                    ar[i][j]='B';
                    else
                    ar[i][j]='W';
                    
                }
            }
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(i>j)
                    ar[i][j]='W';
                    else
                    ar[i][j]='B';
                    
                }
            }
            
        }
        
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<ar[i][j];
                    
                }
                cout<<"\n";
            }
        
        
        
        
    }
    return 0;
}