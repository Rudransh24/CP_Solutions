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
    while(t--)
    {
        int n,k;
        cin>>n;
        int ar[n+2]={0};
        vector<int> v[1000005];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        int x=0;
        for(int i=n;i>=1;i--)
        {
            for (int j=1; j<=sqrt(i); j++) 
            { 
                if (i%j == 0) 
                { 
                    if (i/j == j) 
                    {
                        v[x].pb(j); 
                        //cout<<j<<" ";
                    }
                    else
                    {
                        v[x].pb(j); 
                        v[x].pb(i/j);
                        //cout<<j<<" "<<i/j<<" ";
                    }
                }
            }
            x++;
            //cout<<"\n";
        }
        
        //for(int i=0;i<n;i++)
        //{
            //int count=1;
           //for(auto it=v[i].begin();it!=v[i].end();it++)
            //{
                //cout<<*it<<" ";
            //}
            //cout<<"\n";
        //}
        vector<int> vv;
        for(int i=0;i<n;i++)
        {
            int count=1;
            sort(v[i].begin(),v[i].end());
            auto temp=++v[i].begin();
            for(auto x=v[i].begin(),z=temp;x!=v[i].end()&&z!=v[i].end();x++,z++)
            {
                //cout<<*temp;
                //cout<<ar[x]<<" ";
                //cout<<ar[temp];
                if(ar[*x]<ar[*z])
                count++;
                //cout<<"\n";
            }
            vv.pb(count);
        }
        
        cout<<*max_element(vv.begin(),vv.end())<<"\n";
        
    } 
  
   return 0;
   
 }