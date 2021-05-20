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
    //cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        string y="O-|-OOOO";
        if(n==0)
        cout<<y<<"\n";
        while(n)
        {
                  int x=n%10;
                  if(x==0)
                  cout<<y<<"\n";
                  if(x==1)
                  cout<<"O-|O-OOO"<<"\n";
                  if(x==2)
                  cout<<"O-|OO-OO"<<"\n";
                  if(x==3)
                  cout<<"O-|OOO-O"<<"\n";
                  if(x==4)
                  cout<<"O-|OOOO-"<<"\n";
                  if(x==5)
                  cout<<"-O|-OOOO"<<"\n";
                  if(x==6)
                  cout<<"-O|O-OOO"<<"\n";
                  if(x==7)
                  cout<<"-O|OO-OO"<<"\n";
                  if(x==8)
                  cout<<"-O|OOO-O"<<"\n";
                  if(x==9)
                  cout<<"-O|OOOO-"<<"\n";
                  n=n/10;
                  
        }
        
    }
    return 0;
}