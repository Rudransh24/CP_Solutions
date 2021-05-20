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
#define int long long
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
        int a,b,p,q,r,k,m,n,x;
        //cin>>a>>x;
        cin>>n>>x;
        //cin>>p>>q;
        //cin>>k;
        int ar[n]={0};
        int temp[n];
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            temp[n-i-1]=ar[i];
        }
        
        for(int i=1;i<n;i++)
        ar[i]=ar[i]+ar[i-1];
        
        for(int i=1;i<n;i++)
        temp[i]=temp[i]+temp[i-1];
        
        vector<int> v;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]%x!=0)
            {
                v.pb(i+1);
                flag=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(temp[i]%x!=0)
            {
                v.pb(i+1);
                flag=1;
            }
        }
        
        if(flag)
        cout<<*max_element(v.begin(),v.end())<<"\n";
        else 
        cout<<-1<<"\n";
        
        
    }
    return 0;
}