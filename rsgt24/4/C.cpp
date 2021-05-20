#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int unsigned long long int
#define pb push_back
#define mp make_pair
#define d(x) cout<<x<<"\n"


int32_t main()
{
    fastio
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    unordered_map <string,int> mp;
    int n;
    cin>>n;
    string x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(mp[x]==0)
        {
            cout<<"OK"<<"\n";
        }
        else
        {
            cout<<x<<mp[x]<<"\n";
        }
        mp[x]++;
    }
    return 0;
}