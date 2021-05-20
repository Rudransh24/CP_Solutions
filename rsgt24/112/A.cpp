#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long

int32_t main(void)
{
        
                  string x,y;
                  cin>>x;
                  cin>>y;
                  for(int i=0;i<y.size();i++)
                  y[i]=tolower(y[i]);
                    for(int i=0;i<y.size();i++)
                  x[i]=tolower(x[i]);
                 if(x==y)
                 cout<<"0"<<endl;
                  if(x<y)
                  cout<<"-1"<<endl;
                  if(x>y)
                  cout<<"1"<<endl;
           return 0;
}