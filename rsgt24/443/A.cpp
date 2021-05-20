#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

int32_t main()
{
    fastio
    string x;
    getline(cin,x);
    
    map<int,int> mp;
    
    int count=0;
    //cout<<x<<" "<<x.size()<<"\n";
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='{'||x[i]=='}'||x[i]==' '||x[i]==',')
        continue;
        else
        {
            mp[x[i]-'a']++;
        }
    }
    
    /*for(int i=0;i<mp.size();i++)
    {
       cout<<mp[i]<<" ";
    }*/
    
    for(int i=0;i<mp.size();i++)
    {
        if(mp[i]!=0)
        count++;
    }
    
    cout<<count<<"\n";
    return 0;
}