#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define mp make_pair
#define d(x) cout<<x<<"\n"
int32_t main()
{
    fastio
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> v;
    vector<int> temp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    
    int t=0;
    int tup=1;
    int tdown=1;
    int teat=1;
    int tjump=1;
    
    for(int i=0;i<v.size();i++)
    {
        if(i==0)
        t+=v[i]+teat;
        else if(v[i]>=v[i-1])
        t+=tjump+tup*(v[i]-v[i-1])+teat;
        else if(v[i]<v[i-1])
        t+=tdown*(v[i-1]-v[i])+tjump+teat;
    }
    
    cout<<t<<"\n";
    
    return 0;
}