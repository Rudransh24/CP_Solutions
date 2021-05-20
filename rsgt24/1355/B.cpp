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
    int t=1;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int ar[n];
        //map<int,int> mp;
        //set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            //mp[ar[i]]++;
            //s.insert(ar[i]);
        }
        
        int count=n;
        int ans=0;
        
        sort(ar,ar+n,greater<int>());
        for(int i=0;i<n;i++)
        {
            int cnt=1;
            int temp=ar[i];
            while(cnt<temp)
            {
                cnt++;
            }
            
            
            count-=cnt;
            //d(count);
            
            if(count>=0)
            {
                ans++;
            }
            else
            break;
        }

        cout<<ans<<"\n";
        
    }
  
    return 0;
   
 }