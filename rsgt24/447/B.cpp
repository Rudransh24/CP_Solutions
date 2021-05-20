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
    int ascii=97;
    string x;
    cin>>x;
    int n;
    cin>>n;
    vector<pair<char,int>> v;
    int max_1=INT_MIN;
    for(int i=1;i<=26;i++)
    {
        int b;
        cin>>b;
        max_1=max(max_1,b);
        v.pb(mp(ascii,b));
        ascii++;
    }

    int sum=0;
    
    for(int i=0;i<x.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(x[i]==v[j].first)
            sum+=v[j].second*(i+1);
        }
    }
    
    for(int i=x.size()+1;i<=n+x.size();i++)
    {
        sum+=i*max_1;
    }
    
    d(sum);
    return 0;
}