#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

int32_t main()
{
    fastio
    string x;
    cin>>x;
    int flag=0;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='H'||x[i]=='Q'||x[i]=='9')
        {
            flag=1;
            break;
        }
    }
    
    if(flag==1)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    return 0;
}