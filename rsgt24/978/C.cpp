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
    int a[n];
    int b[m];
    
    int sum=0;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        v.pb(sum);
    }
    
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        //vector<int>::iterator lower;
        int lower=lower_bound(v.begin(),v.end(),b[i])-v.begin();
        cout<<lower+1<<" ";
        if(lower==0)
        cout<<b[i]<<"\n";
        else
        cout<<b[i]-v[lower-1]<<"\n";
    }
    
    return 0;
}