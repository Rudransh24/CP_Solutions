#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back

int32_t main()
{
    fastio
    int n,k;
    cin>>n>>k;
    
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        ar[i]+=k;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<=5)
        count++;
    }
    
    
    cout<<count/3<<"\n";
    
    
    
    
    
    return 0;
}