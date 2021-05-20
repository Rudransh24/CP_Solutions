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

int main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>x>>m;
        int max_1=INT_MIN,min_1=INT_MAX;
        int mm=INT_MIN,mi=INT_MAX;
        int i=0;
        int ans=1;
        int low,high;
        int x1,x2;
        while(m--)
        {
            int a,b;
            cin>>a>>b;
            low=min(a,b);
            high=max(a,b);
            
            if(i==0)
            {
            if(low<=x&&x<=high)
            {
                    max_1=max(max_1,high);
                    min_1=min(min_1,low);
                    ans=max(ans,max_1-min_1+1);
                    x1=min_1;
                    x2=max_1;
                    i++;
            }
            else
            ans=max(ans,max_1);
            }
            else
            {
            if(low<=x&&x<=high||x1<=low&&low<=x2||x1<=high&&high<=x2||x1>=high&&high>=x2||x1>=low&&low>=x2)
            {
                    max_1=max(max_1,high);
                    min_1=min(min_1,low);
                    ans=max(ans,max_1-min_1+1);
                    x1=min_1;
                    x2=max_1;
                    i++;
            }
            else
            ans=max(ans,max_1);
            }
            
        }
        
        cout<<ans<<"\n";
        
        
    }
    return 0;
}