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
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m;
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++)
        cin>>a[i];
        int m1;
        cin>>m1;
        int b[m1];
        for(int i=0;i<m1;i++)
        cin>>b[i];
        
        //vector<pair<int,int>> v;
        
        //for(int i=0;i<n;i++)
        //{
          //        v[i].first=0;
          //        v[i].second=i+1;
        //}
        
        map<int,int> mp;
        for(int i=0;i<m;i++)
        {
          mp[a[i]]++;
        }
        for(int i=0;i<m1;i++)
        {
          mp[b[i]]++;
        }
        
        int flag=0;
        for(int i=1;i<=n;i++)
        {
                  if(mp[i]==0)
                  {
                            flag=1;
                            break;
                  }
        }
        
        if(flag)
        cout<<"Oh, my keyboard!"<<"\n";
        else
        cout<<"I become the guy."<<"\n";
        
    }
    return 0;
}