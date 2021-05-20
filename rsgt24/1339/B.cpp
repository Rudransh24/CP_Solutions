#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
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
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int p[n];
        for(int i=0;i<n;i++)
        cin>>p[i];
        
        sort(p,p+n);
        
        if(n%2==0)
        {
                  for(int i=n/2-1,j=n/2;i>=0,j<n;i--,j++)
                  cout<<p[i]<<" "<<p[j]<<" ";
                  cout<<endl;
        }
        else
        {
                  cout<<p[n/2]<<" ";
                  for(int i=n/2-1,j=n/2+1;i>=0,j<n;i--,j++)
                  cout<<p[i]<<" "<<p[j]<<" ";
                  cout<<endl;
        }
       
        
    }
    return 0;
}