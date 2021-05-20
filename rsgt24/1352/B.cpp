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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
  h:while(t--)
    {
        int n,k;cin>>n>>k;
        vector<int> v;
        if(n==k)
        {
            cout<<"YES"<<"\n";
            for(int i=0;i<k;i++)
            cout<<"1"<<" ";
            cout<<"\n";
            continue;
        }
        if(k==1)
        {
            cout<<"YES"<<"\n";
            cout<<n<<"\n";
            continue;
        }
        if(k>n)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if(n%2==0&&k>n/2&&k%2!=0)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if(k==n-1)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if(n%2!=0&&k%2==0)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if(n%2==0&&k%2!=0)
        {
            int z=(k-1)*2;
            cout<<"YES"<<"\n";
            for(int i=0;i<k;i++)
            {
                if(i==0)
                {
                    cout<<n-z<<" ";
                    //n=n-k-1;
                }
                else
                cout<<"2"<<" ";
                
            }
            cout<<"\n";
            continue;
        }
        if(n%2==0&&k%2==0)
        {
            cout<<"YES"<<"\n";
            for(int i=0;i<k;i++)
            {
                if(i==0)
                {
                    cout<<n-k+1<<" ";
                    //n=n-k+1;
                }
                else
                cout<<"1"<<" ";
                
            }
            cout<<"\n";
            continue;
        }
        if(n%2!=0&&k%2!=0)
        {
            cout<<"YES"<<"\n";
            for(int i=0;i<k;i++)
            {
                if(i==0)
                {
                    cout<<n-k+1<<" ";
                    //n=n-k+1;
                }
                else
                cout<<"1"<<" ";
                
            }
            cout<<"\n";
            continue;
        }
        
    }
   return 0;
   
 }