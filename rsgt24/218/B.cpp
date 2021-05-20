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
#define d(x) cout<<x<<" "
#define pi 3.1415926536

int32_t main(void)
{
    fastio
    int m,n;
    cin>>n>>m;
    int a=n,b=n;
    vector<int> v;
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
        v1.pb(x);
        v2.pb(x);
    }
    
    int amount1=0,amount2=0;
    
    while(a--)
    {
        int p = *max_element(v1.begin(),v1.end());
        int z=p;
        amount1+=z;
        
        for(int i=0;i<m;i++)
        {
            if(v1[i]==z)
            {
                      v1[i]--;
                      break;
            }
        }
        
    }
    
    while(b--)
    {
        for(int i=0;i<m;i++)
        {
            if(v2[i]==0)
            {
                v2[i]=INT_MAX;
            }
        }
        int p=*min_element(v2.begin(),v2.end());
        int z=p;
        amount2+=z;
        for(int i=0;i<m;i++)
        {
            if(v2[i]==z)
            {
                v2[i]--;
                break;
            }
        }
        
    }
    
    d(amount1);
    d(amount2);
    cout<<"\n";
    
    return 0;
}