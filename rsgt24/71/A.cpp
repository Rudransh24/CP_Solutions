#include<bits/stdc++.h>
using namespace std;
#define int double
typedef long long ll;

int32_t main(void)
{
          int t;
          cin>>t;
          while(t--)
          {
                    string x;
                    cin>>x;
                    int z=x.size();
                    if(z>10)
                    {
                              int v=z-2;
                              cout<<x[0]<<v<<x[z-1];
                              cout<<endl;
                    }
                    else
                    cout<<x<<endl;
          }
    return 0;
}