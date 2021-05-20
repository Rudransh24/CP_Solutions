#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b==c)
        cout<<b<<" "<<b<<" "<<b<<"\n";
        else
        cout<<b<<" "<<c<<" "<<c<<"\n";
    }
    return 0;
}