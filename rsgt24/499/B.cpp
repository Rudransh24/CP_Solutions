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
    int n,m;
    cin>>n>>m;
    string a[m],b[m];
    string c[n];
    
    for(int i=0;i<m;i++)
    {
        cin>>a[i]>>b[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        if(c[i]==a[j]||c[i]==b[j])
        {
            if(b[j].size()<a[j].size())
            cout<<b[j]<<" ";
            else
            cout<<a[j]<<" ";
            
            break;
        }
        
    }
    
    cout<<"\n";
    
    
    return 0;
}