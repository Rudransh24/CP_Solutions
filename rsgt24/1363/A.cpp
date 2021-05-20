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
        int n,m,k,a,b;
        cin>>n>>m;
        int ar[n];
        int codd=0,ceven=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]%2==0)
            ceven++;
            else
            codd++;
        }
        int count=0,max_1=INT_MIN,min_1=INT_MAX,sum=0,sum1=0;
        bool check,check1;
        
        sort(ar,ar+n);
        vector<int> odd,even;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]%2==0)
            even.pb(ar[i]);
            else
            odd.pb(ar[i]);
        }
        
        if(even.size()==0)
        {
        for(int i=0;i<odd.size()&&(cnt)<m;i++)
        {
        sum+=odd[i];
        cnt++;
        }  
        
        }
        else
        {
        
        if(codd<=m)
        for(int i=0;i<odd.size()&&(cnt)<m;i++)
        {
        sum+=odd[i];
        cnt++;
        }
        else
        {
           for(int i=0;i<odd.size()&&(cnt+1)<m;i++)
        {
        sum+=odd[i];
        cnt++;
        } 
        for(int i=0;i<even.size()&&cnt<m;i++)
        {
        sum1+=even[i];
        cnt++;
        } 
        }
        }
        
        //cout<<sum+sum1<<"\n";
        if((sum+sum1)%2!=0)
        cout<<"yes"<<"\n";
        else
        cout<<"no"<<"\n";
        
    }
    return 0;
}