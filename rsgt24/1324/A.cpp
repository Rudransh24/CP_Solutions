#include<bits/stdc++.h>
using namespace std;
//#define int long long

int main(void)
{
          int t;
          cin>>t;
          while(t--)
          {
                    int n;
                    cin>>n;
                    int ar[n];
                    for(int i=0;i<n;i++)
                    cin>>ar[i];
                    int count=0;
                    for(int i=0;i<n;i++)
                    {
                              for(int j=i+1;j<n;j++)
                              if(abs(ar[i]-ar[j])%2==0)
                              continue;
                              else
                              {
                                        count=1;
                                        break;
                              }
                    }
                    if(count==0)
                    cout<<"YES"<<endl;
                    else
                    cout<<"NO"<<endl;
          }
          return 0;
}