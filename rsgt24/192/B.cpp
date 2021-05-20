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
#define pi 3.1415926536

int32_t main(void)
{
    fastio
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int answer=0;
    int flag=0;
    while(1)
    {
        if(ar[0]==answer||ar[n-1]==answer)
        break;
        for(int j=0;j<n;)
        {
            if(j==n-1)
            break;
            else
            if(j+2<n&&ar[j+2]>answer)
            j+=2;
            else
            if(j+1<n&&ar[j+1]>answer)
            j++;
            else if(ar[j+1]==answer||ar[j+2]==answer)
            {
                flag=1;
                break;
            }
        }
        
        if(flag==1)
        break;
        
        answer++;
        
       
    }
    d(answer);
    
    
    return 0;
}