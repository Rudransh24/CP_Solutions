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

void leftrotate(string &s, int d) 
{ 
    reverse(s.begin(), s.begin()+d); 
    reverse(s.begin()+d, s.end()); 
    reverse(s.begin(), s.end()); 
} 
  
// In-place rotates s towards right by d 
void rightrotate(string &s, int d) 
{ 
   leftrotate(s, s.length()-d); 
} 

int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
          map<int,int> mp;
          string x;
          cin>>x;
          int n=x.size();
          set<char> st;
          for(int i=0;i<n;i++)
          {
                    mp[x[i]-'0']++;
                    st.insert(x[i]);
          }
          string temp=x;
          leftrotate(x, 1);
          rightrotate(temp, 1);
          
          //cout<<x<<" "<<temp<<"\n";
          if(x==temp)
          {
                    cout<<0<<"\n";
          }
          else
          {
                    int cnt=0;
                    int max_1=INT_MIN;
                    for(auto i: mp)
                    {
                              if(i.second>max_1)
                              max_1=max(i.second,max_1);
                    }
                    
                    for(int i=0;i<x.size();i++)
                    {
                              if(mp[x[i]-'0']==max_1)
                              cnt++;
                    }
                    
                    if(cnt==x.size()&&st.size()==x.size())
                    cout<<x.size()-2<<"\n";
                    else if(cnt==x.size()&&st.size()<x.size())
                    cout<<x.size()-(st.size()-1)*max_1<<"\n";
                    else
                    {
                              cout<<x.size()-cnt<<"\n";
                    }
                    
          }
        
    }
    return 0;
}