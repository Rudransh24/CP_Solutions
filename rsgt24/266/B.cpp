#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back

int32_t main()
{
    fastio
    int n,t;
    cin>>n>>t;
    
    string x;
    cin>>x;
    
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n;)
        if(x[j]=='B'&&x[j+1]=='G')
        {
            swap(x[j],x[j+1]);
            j+=2;
        }
        else
        j++;
    }
    
    cout<<x<<endl;
    return 0;
}