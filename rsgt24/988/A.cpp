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
    int n,k;
    cin>>n>>k;
    int ar[n];
    vector<pair<int,int>> vp;
    map<int,int> mp;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        vp.pb({ar[i],i+1});
        mp[ar[i]]=i+1;
        s.insert(ar[i]);
    }
    
    vector<int> ans;
    int cnt=0;
    for(auto i: mp)
    {
        if(i.second==0)
        continue;
        else if(cnt<k)
        {
            ans.pb(i.second);
            cnt++;
        }
    }
    
    //for(int i=0;i<k;i++)
        //cout<<ans[i]<<" ";
        //cout<<"\n";
        
    if(s.size()>=k)
    {
        cout<<"YES"<<"\n";
        for(int i=0;i<k;i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }
    else
    cout<<"NO"<<"\n";
    
    
    return 0;
}