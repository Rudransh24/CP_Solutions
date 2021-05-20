#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

int32_t main()
{
    fastio
    string x,y;
    cin>>x>>y;
    reverse(y.begin(),y.end());
    if(y==x)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    
    return 0;
}