#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

void pa(int ar[],int n)
{
    for(int i=1;i<=n;i++)
    cout<<ar[i]<<" ";
    cout<<"\n";
}

int32_t main()
{
    fastio
    int n;
    cin>>n;
    int z=pow(2,n); //z is the number of permutations here
    cout<<z-1<<"\n";
    return 0;
}