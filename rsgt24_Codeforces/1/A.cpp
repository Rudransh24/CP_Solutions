#include<bits/stdc++.h>
using namespace std;
#define int double
typedef long long ll;

int32_t main(void)
{
    int n,m,a;
    cin>>n>>m>>a;
    int x=ceil(n/a);
    int y=ceil(m/a);
    cout<<ll(x*y)<<endl;
    return 0;
}
