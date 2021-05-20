#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define mp make_pair
int32_t main()
{
    fastio
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(mp(x,i+1));
    }
    
    sort(v.begin(),v.end());
    
    cout<<v[n-k].first<<"\n";
    for(int i=n-k;i<n;i++)
    cout<<v[i].second<<" ";
    
    
    return 0;
}