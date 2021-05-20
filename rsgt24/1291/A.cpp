#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string x;
        cin>>x;
        string z="";
        for(int i=0;i<n;i++)
        {
                  if(x[i]%2==1)
                  z=z+x[i];
        }
        if(z.size()<2)
        cout<<"-1"<<endl;
        else
        cout<<z[0]<<z[1]<<endl;
    }
    return 0;

}