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
        int n,a,b;
        cin>>n>>a>>b;
        char countar[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        
        string x="abcdefghijklmnopqrstuvwxyz";
        string z="";
        for(int i=0;i<b;i++)
        {
            z=z+countar[i];
        }
        //cout<<z<<endl;
        //int flag=0;
        if(a==b)
        {   
            int x=0;
            for(int i=0;i<n;i++)
            {
                cout<<countar[x];
                x++;
                if(x==26)
                x=0;
            }
            cout<<"\n";
        }
        else if(b==1)
        {
            for(int i=0;i<n;i++)
            cout<<'a';
            cout<<"\n";
        }
        else
        {
            int x=0;
            for(int i=0;i<n;i++)
            {
                if(i%b==0&&i!=0)
                {
                    x=0;
                }
                cout<<z[x];
                x++;
                
            }
            cout<<"\n";
        }
        
        
    }
    return 0;
}