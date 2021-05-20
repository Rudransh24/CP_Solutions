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
#define int unsigned long long int
#define pb push_back
#define mp make_pair
#define d(x) printf("%0.10f",x);
#define pi 3.1415926536

int32_t main(void)
{
    fastio
    int n;
    cin>>n;
    float ar[n+1]={0};
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n,greater<int>());
    float sum=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        sum+=(pi*ar[i]*ar[i]-pi*ar[i+1]*ar[i+1]);
    }
    
    d(sum);
    
    return 0;
}