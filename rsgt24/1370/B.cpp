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
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
  
    

int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n;
        n=2*n;
        int ar[n];
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            a.pb(ar[i]);
        }
        
        
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++)
        {
            int ind=i;
            int ind1;
            for(int j=0;j<n;j++)
            {
                ind1=j;
                if(i!=j&&a[i]!=-1&&a[j]!=-1&&a[i]%2==0&&a[j]%2==0)
                {
                    if(a[i]+a[j]==2)
                    v.pb(mp(i+1,j+1));
                    else if(!(isPrime(a[i]+a[j])))
                    v.pb(mp(i+1,j+1));
                    break;
                }
                if(i!=j&&a[i]!=-1&&a[j]!=-1&&a[i]%2==1&&a[j]%2==1)
                {
                    if(a[i]+a[j]==2)
                    v.pb(mp(i+1,j+1));
                    else if(!(isPrime(a[i]+a[j])))
                    v.pb(mp(i+1,j+1));
                    break;
                }
                
            }
            a[ind]=-1;
            a[ind1]=-1;
        }
        
        int cnt=0;
        for(int i=0;i<v.size();i++)
        {
            if(cnt==x-1)
            break;
            cout<<v[i].first<<" "<<v[i].second<<"\n";
            cnt++;
        }
        
    }
    return 0;
}