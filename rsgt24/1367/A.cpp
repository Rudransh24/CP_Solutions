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


string subString(string s, int n)  
{ 
    // Pick starting point in outer loop 
    // and lengths of different strings for 
    // a given starting point 
    
    for (int i = 0; i < n; i++)  
        for (int len = 1; len <= n - i; len++) 
            cout << s.substr(i, len) << endl; 
} 

int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        string b;
        cin>>b;
        vector<char> v;
        for(int i=0;i<b.size();i++)
        {
            
            if(i==0)
            {
                v.pb(b[i]);
            }
            else
            {
                if(b[i]==b[i+1])
                {
                    v.pb(b[i]);
                    i++;
                }
                else
                {
                    v.pb(b[i]);
                }
            }
            
        }

        for(int i=0;i<v.size();i++)
        cout<<v[i];
        cout<<"\n";
        
        
    }
    return 0;
}