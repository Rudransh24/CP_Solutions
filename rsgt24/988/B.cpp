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

bool comp(string &s1,string &s2)
{
    return s1.size() < s2.size();
}

int32_t main(void)
{
    int n,k;
    cin>>n;
    k=n;
    vector<string> ans;
    while(k--)
    {
        string x;
        cin>>x;
        ans.pb(x);
    }
    
    sort(ans.begin(),ans.end(),comp);
    
    
    int cnt;
    int f=0;
    for(int i=0;i<ans.size()-1;i++)
    {
        string t=ans[i];
        string z=ans[i+1];
        //cout<<t<<z<<"\n";
        cnt=0;
        for (int j = 0; j < z.size(); j++)  
        {
            int dd=0;
            for (int len = 1; len <= z.size() - j; len++) 
            {
                string ss=z.substr(j, len);
                if(ss==t)
                {
                    cnt=0;
                    break;
                }
                else 
                cnt=1;
            }
            
            if(cnt==0)
            {
                dd=1;
                break;
            }
        }
        
        //cout<<cnt<<"\n";
        if(cnt==1)
        {
            f=1;
            break;
        }
        
        
    }
    
    if(f)
    cout<<"NO"<<"\n";
    else
    {
        cout<<"YES"<<"\n";
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<"\n";
    }
    
    return 0;
}