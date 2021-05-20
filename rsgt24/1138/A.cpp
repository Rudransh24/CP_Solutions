#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
 
int32_t main(void)
{
    fastio
    int n;cin>>n;
    int ar[1000000]={INT_MAX};
    int count1=0,count2=0;
    int a[2]={0};
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<=n;i++)
    {
        if(ar[i]==1)
        {
                  a[0]++;
                  //cout<<a[0]<<endl;
        }
        else
        { 
                  if(count1<a[0])
                  {
                              count1=a[0];
                              a[0]=0;
                              //cout<<a[0]<<endl;
                  }
                  else
                  {
                            a[0]=0;
                            continue;
                  }
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(ar[i]==2)
        a[1]++;
        else
        {
                  if(count2<a[1])
                  {
                              count2=a[1];
                              a[1]=0;
                  }
                  else
                  {
                            a[1]=0;
                            continue;
                  }
        }
    }
    //cout<<count1<<" "<<count2<<endl;
    int x=min(count1,count2);
    cout<<2*x<<endl;
    return 0;
}