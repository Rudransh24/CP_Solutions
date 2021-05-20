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
    int t=1;
    cin>>t;
pt: while(t--)
    {
        int n;
        cin>>n;
        string x;
        cin>>x;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(x[i]=='1')
            break;
            else
            cnt1++;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(x[i]=='0')
            break;
            else
            cnt2++;
        }
        
        if(x=="0")
        cout<<0<<"\n";
        else if(x=="1")
        cout<<1<<"\n";
        else if(cnt1==0&&cnt2==0)
        cout<<0<<"\n";
        else if(cnt1+cnt2==n)
        cout<<x<<"\n";
        else
        {
        cout<<0;
        for(int i=0;i<cnt1;i++)
        cout<<0;
        for(int i=0;i<cnt2;i++)
        cout<<1;
        cout<<"\n";
        }
        
    }
    return 0;
}