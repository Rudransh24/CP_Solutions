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
#define d(x) cout<<x<<"\n"

int32_t main(void)
{
    fastio
    string x;
    cin>>x;
    int c4=0,c7=0;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='4')
        c4++;
        if(x[i]=='7')
        c7++;
    }
    
    if(c4==0&&c7==0)
    d(-1);
    else
    {
        if(c4>=c7)
        d(4);
        else
        d(7);
    }
    return 0;
}