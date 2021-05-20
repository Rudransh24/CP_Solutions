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

bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}

int32_t main(void)
{
    fastio
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t=1;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        if(k==1)
        {
            cout<<n<<"\n";
            continue;
        }
        
        if(n<=k)
        {
            cout<<1<<"\n";
            continue;
        }
        else
        {
            if(isPrime(n))
            {
                cout<<n<<"\n";
                continue;
            }
            else
            {
                if(n%k==0)
                cout<<n/k<<"\n";
                else
                {
                    vector<int> v; 
                    for (int i=1; i<=sqrt(n); i++) 
                    { 
                    if (n%i==0) 
                    { 
                    if (n/i==i&&(n/i<=k)) // check if divisors are equal 
                    v.push_back(i); 
                    else
                    {
                    if(i<=k)
                    v.push_back(i);
                    if(n/i<=k)
                    v.push_back(n/i); 
                    } 
                    }           
                    } 
                    
                    sort(v.begin(),v.end(),greater<int>());
                    
                    cout<<n/v[0]<<"\n";
                }
                
            }
        }
    }
  
    return 0;
   
 }