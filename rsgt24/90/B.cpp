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
    char ar[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>ar[i][j];
    
    string x="";
    int flag=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            flag=0;
            for(int k=0;k<m;k++)
            {
                if(ar[i][j]==ar[i][k]&&j!=k)
                {
                    flag=1;
                    break;
                }
                
            }
            
            if(flag==1)
            continue;
            
            for(int k=0;k<n;k++)
            {
                if(ar[i][j]==ar[k][j]&&i!=k)
                {
                    flag=1;
                    break;
                }
            }
            
            if(flag==1)
            continue;
            else
            x=x+ar[i][j];
        }
    }
    
    
    cout<<x<<"\n";
    
    return 0;
}