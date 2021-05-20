#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

int32_t main()
{
    fastio
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    int flag=0;
    int count=0;
    
    int *max_1=max_element(ar,ar+n);
    int *min_1=min_element(ar,ar+n);
    int x=*min_1;
    int b=*max_1;
    int z=distance(ar,max_element(ar,ar+n));
    int q;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==x)
        q=i;
    }
    //cout<<z<<" "<<q<<"\n";
    if(q>z)
    cout<<z+(n-q-1)<<"\n";
    else
    cout<<z+(n-q-2)<<"\n";
    return 0;
}