#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n,k;
          cin>>n>>k;
          int ar[n];
          int count=0;
          int flag=1;
          int cn=0;
          for(int i=0;i<n;i++)
          {         
                    count=0;
                    flag=1;
                    cin>>ar[i];
                    int a=ar[i];
                    while(a)
                    {
                              int y=a%10;
                              a=a/10;
                              if(y==4||y==7)
                              count++;
                              if(count<=k)
                              flag=1;
                              else
                              {
                                        flag=0;
                                        break;
                              }
                    }
                    if(flag==1)
                    cn++;
          }
          cout<<cn<<endl;
          
          return 0;         
}