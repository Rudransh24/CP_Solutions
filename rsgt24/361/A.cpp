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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            cout<<m<<" ";
            else
            cout<<0<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}