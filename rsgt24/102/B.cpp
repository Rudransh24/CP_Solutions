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
    string x;
    cin>>x;
    int count=0;
    while(x.size()>1)
    {
        int sum=0;
            
        for(int i=0;i<x.size();i++)
        {
            sum=sum+(x[i]-'0');
        }
        
        x=to_string(sum);
        count++;
        
    }
       
    cout<<count<<"\n";
    return 0;
}