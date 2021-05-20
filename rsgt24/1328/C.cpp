#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {   
              
             int n;
             cin>>n;
             string x;
             cin>>x;
             string y="",z="";
             int flag=0;
             for(int i=0;i<n;i++)
             {
                       if(i==0)
                       {
                                 y=y+'1';
                                 z=z+'1';
                                 continue;
                       }
                       if(x[i]=='1'&&flag==0)
                       {
                                 y=y+'1';
                                 z=z+'0';
                                 flag=1;
                                 continue;
                       }
                       if(x[i]=='1'&&flag==1)
                       {
                                 y=y+'0';
                                 z=z+'1';
                                 //flag=1;
                                 continue;
                       }
                       if(x[i]=='2')
                       {
                                 if(flag==1)
                                 {z=z+'2';
                                 y=y+'0';
                                 continue;}
                                 else
                                 {
                                        z=z+'1';
                                         y=y+'1';
                                        continue;
                                 }
                       }
                       if(x[i]=='0')
                       {
                                 y=y+'0';
                                 z=z+'0';
                                 continue;
                       }
             }
             cout<<y<<endl;
             cout<<z<<endl;
    }
    return 0;
}