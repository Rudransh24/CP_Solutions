#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back

int32_t main()
{
    fastio
    string x;
    cin>>x;
    vector<int>v;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]!='+')
        {
            int y=x[i]-'0';
            v.push_back(y);
        }
    }
    
    sort(v.begin(),v.end());
    
    /*for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";*/
    
    string z="";
    
    for(int i=0;i<v.size();i++)
    {
        string b="";
        if(i==v.size()-1)
        {
            int q=v[i];
            b=to_string(q);
            z=z+b;
            //cout<<z<<endl;
        }
        else
        {
            int q=v[i];
            b=to_string(q);
            z=z+b+"+";
            //cout<<z<<endl;
        }
        
    }
    
    cout<<z<<"\n";
    
    return 0;
}