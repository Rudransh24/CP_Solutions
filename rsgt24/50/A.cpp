#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long

int32_t main(void)
{
        int n,m;
        cin>>m>>n;
        int x=min(m,n);
        int y=max(m,n);
        int count=0;
        if(m==n&&m%2!=0)
        count=m/2;
        if(m!=n&&m%2!=0&&n%2!=0)
        count++;
        if(m!=n&&(m%2!=0||n%2!=0))
        {
                  cout<<m*n/2;
          exit(0);
        }
        int z=x/1;
        int h=y/2;
        cout<<z*h+count<<endl;
           return 0;
}