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
#define int long long
#define pb push_back
#define mp make_pair
#define d(x) cout<<x<<"\n"

int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(ar[i]==ar[i+1])
            continue;
            else
            {
                flag=1;
                break;
            }
        }
        
        if(!flag)
        {
            for(int i=0;i<n;i++)
            cout<<ar[i]<<" ";
            cout<<"\n";
        }
        else
        {
            int cnt=0;
            for(int i=0;i<n-1;i++)
            {
                    if(cnt%2==0)
                    {
                    if(ar[i+1]-ar[i]>=0)
                    {
                        cnt++;
                        continue;
                    }
                    else
                    {
                        if(ar[i+1]<=0&&ar[i]<=0)
                        ar[i+1]=-ar[i+1];
                        else
                        {
                            if(ar[i]>0)
                            ar[i]=-ar[i];
                            else
                            ar[i]=abs(ar[i]);
                        }
                    }
                    }
                    else
                    {
                    if(ar[i+1]-ar[i]<0)
                    {
                        cnt++;
                        continue;
                    }
                    else
                    {
                        if(ar[i+1]>=0&&ar[i]>=0)
                        ar[i+1]=-ar[i+1];
                        else
                        {
                            if(ar[i]>0)
                            ar[i]=-ar[i];
                            else
                            ar[i]=abs(ar[i]);
                            
                            
                        }
                    }
                    }
                    cnt++;
            }
            
            for(int i=0;i<n;i++)
            cout<<ar[i]<<" ";
            cout<<"\n";
        }
        
    }
    return 0;
}