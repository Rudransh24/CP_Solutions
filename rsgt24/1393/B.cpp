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
        //string x;
        //cin>>x;
        vector<int> ar(1000000);
        map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ar.pb(x);
            mp[x]++;
        }
        
        int q;
        cin>>q;
        while(q--)
        {
            string x;
            int y;
            cin>>x>>y;
            if(x=="+")
            {
                //ar.pb(y);
                mp[y]++;
            }
            else
            {
                //int z=lower_bound(ar.begin(),ar.end(),y)-ar.begin();
                mp[y]--;
                //ar.erase(ar.begin()+z);
            }
            int cnt=0;
            int count=0;
            int cntt=0;
            int jj=0;
            for(auto i: mp)
            {
                if(i.second>=8)
                cntt++;
                if(i.second>=6)
                jj++;
                else if(i.second>=4)
                count++;
                else if(i.second>=2)
                cnt++;
                
            }
            
            if((jj>=1&&cnt>=1)||count>=2||jj>=2||(jj>=1&&count>=1)||cntt>=1||(count>=1&&cnt>=2))
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}