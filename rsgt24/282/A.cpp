#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long

int32_t main(void)
{
        int t;
        cin>>t;
        int count=0;
        while(t--)
        {
                  string x;
                  cin>>x;
                  size_t found=x.find("++");
                  if(found != string::npos)
                  count++;
                  else
                  count--;
        }
        cout<<count<<endl;
           return 0;
}