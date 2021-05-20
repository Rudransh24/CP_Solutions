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
                    if(n<=2)
                    {cout<<"NO"<<endl;
                    continue;}
                    int ar[n];
                    for(int i=0;i<n;i++)
                    cin>>ar[i];
                    int count=1;
                    for(int i=0;i<n;i++)
                    {
                              for(int j=i+2;j<n;j++)
                              {
                                        if(ar[i]==ar[j])
                                        {
                                                  count=0;
                                                  
                                        }
                                        else
                                        continue;
                              }
                    }
                    if(count==1)
                    cout<<"NO"<<endl;
                    else
                    cout<<"YES"<<endl;
          }
          return 0;
}