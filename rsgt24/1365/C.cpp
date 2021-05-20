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

int glob=0;

int check(int a[],int temp[],int n)
{
    
    int count=0;
    for(int i=0;i<n;i++)
    if(a[i]==temp[i])
    count++;
    
    return count;
}

int32_t main(void)
{
    fastio
    int t=1;
    //cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int a[n],b[n],temp[n],temp1[n];
        
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            temp[i]=b[i];
            temp1[i]=b[i];
        }
        
        vector<int> v,v1;
        for(int i=0;i<n;i++)
        {
            rotate(temp,temp+i,temp+n);
            v.pb(check(a,temp,n));
        }
        
        
        for(int i=0;i<n;i++)
        {
            rotate(temp1,temp1+n-i,temp1+n);
            v1.pb(check(a,temp1,n));
        }
        
        cout<<max(*max_element(v.begin(),v.end()),*max_element(v1.begin(),v1.end()))<<"\n";
        
        
    }
    return 0;
}