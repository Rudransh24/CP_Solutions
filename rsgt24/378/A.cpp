#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

int32_t main()
{
    fastio
    int n,m;
    cin>>n>>m;
    
    int w=0,d=0,l=0;
    
    for(int i=1;i<=6;i++)
    {
        if(abs(n-i)<abs(m-i))
        w++;
        else if(abs(n-i)==abs(m-i))
        d++;
        else
        l++;
    }
    
    cout<<w<<" "<<d<<" "<<l<<"\n";
    return 0;
}