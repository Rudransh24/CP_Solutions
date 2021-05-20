#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(void)
{
          int t;
          cin>>t;
          int x=t;
          int ar[t];
          int i=0;
          while(x--)
          {
                    int n;
                    cin>>n;
                    ar[i]=n;
                    i++;
          }
          /*for(int i=0;i<t;i++)
          cout<<ar[i]<<endl;*/
          int odd=0;
          for(int i=0;i<t;i++)
          {
                    if(ar[i]%2==0)
                    ar[i]=ar[i]/2;
                    else
                    {
                              if(odd%2==0&&ar[i]<0)
                              ar[i]=ar[i]/2;
                              else
                              if(odd%2!=0&&ar[i]<0)
                              ar[i]=ar[i]/2-1;
                              else
                              if(odd%2==0&&ar[i]>0)
                              ar[i]=ar[i]/2+1;
                              else
                              ar[i]=ar[i]/2;
                              odd++;
                              
                    }
          }
          for(int i=0;i<t;i++)
          cout<<ar[i]<<endl;
          
          return 0;
}