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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>ar;
        map<int,int> mp;
        map<int,int> mmp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ar.pb(x);
            mmp[x]++;
        }
        int maxsum=2*(*max_element(ar.begin(),ar.end()));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int sum=0;
                if(i!=j)
                {
                    sum+=ar[i]+ar[j];
                    mp[sum]++;
                }
            }
        }
        int count=0;
        vector<pair<int,int>> v[100000];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int sum=0;
                if(i!=j)
                {
                    int check=ar[i]+ar[j];
                    v[check].pb({ar[i],ar[j]});
                }
            }
        }
        
        
        map<int,int> mpp;
        int aans=0;
        for(int i=1;i<=maxsum;i++)
        {
            count=0;
            for(auto j: v[i])
            {
                mpp[j.first]++;
                mpp[j.second]++;
                if(mpp[j.second]<=mmp[j.second]&&mpp[j.first]<=mmp[j.first])
                count++;
            }
            aans=max(aans,count);
            mpp.clear();
        }
        
        cout<<aans<<"\n";
        
        
    }
    return 0;
}