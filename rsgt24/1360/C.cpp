

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
        int n,b;
        cin>>n;
        vector<int> ar;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ar.pb(x);
        }
        //sort(ar.begin(),ar.end(),greater<int>());
        int min_1=INT_MAX;
        int check=1;
        vector<int> pos;
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    int check1=1;
                    for(int k=0;k<pos.size();k++)
                    if(i==pos[k]||j==pos[k])
                    {
                        check1=0;
                        break;
                        //break;
                    }
                    
                    if(!check1)
                    continue;
                    
                    if((ar[i]%2==ar[j]%2))
                    {
                        pos.pb(i);
                        pos.pb(j);
                        count++;
                        break;
                    }
                    
                }
            }
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    int check1=1;
                    for(int k=0;k<pos.size();k++)
                    if(i==pos[k]||j==pos[k])
                    {
                        check1=0;
                        break;
                        //break;
                    }
                    
                    if(!check1)
                    continue;
                    
                    if(abs(ar[i]-ar[j])==1)
                    {
                        pos.pb(i);
                        pos.pb(j);
                        count++;
                        break;
                    }
                    
                }
            }
        }
        //cout<<count<<"\n";
        
        if(count==n/2)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
  
    return 0;
   
 }