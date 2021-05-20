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
        int n;cin>>n;
        string x;
        cin>>x;
        int count=0;
        for(int i=0;i<x.size()-1;i++)
        {
            if(x[i]=='R'&&x[i+1]=='R')
            count++;
            else if(x[i]=='L'&&x[i+1]=='L')
            count++;
        }
        
        if(count==0)
        {
            cout<<count<<"\n";
            continue;
        }
        
        if(count&1)
        cout<<(count-1)/2<<"\n";
        else
        {
            if((count/2)%2==0&&n%2==0)
            cout<<count/2-1<<"\n";
            else if((count/2)%2==1&&n%2==1)
            cout<<count/2<<"\n";
            else if((count/2)%2==1&&n%2==0)
            cout<<count/2-1<<"\n";
            else
            cout<<count/2<<"\n";
        }
    
    }
    return 0;
}