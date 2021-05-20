#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

void pa(int ar[],int n)
{
    for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";
    cout<<"\n";
}

int32_t main()
{
    fastio
    int n,m;
    cin>>n>>m;
    int a[n+1],b[m+1];
    for(int i=0;i<=n;i++)
    a[i]=i;
    for(int i=0;i<=m;i++)
    b[i]=i;
    
    sort(b,b+m+1,greater<int>());
    int min_1=min(n,m);
    
    cout<<min_1+1<<"\n";
    for(int i=0;i<=min_1;i++)
    cout<<a[i]<<" "<<b[i]<<"\n";
    
    return 0;
}