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
    int n;
    cin>>n;
    int h[n],a[n];
    int k=0;
    while(n--)
    {
        cin>>h[k]>>a[k];
        k++;
    }
    //pa(h,k);
    //pa(a,k);
    //cout<<k<<endl;
    int count=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(h[i]==a[j]&&i!=j)
            count++;
            else
            continue;
        }
    }
    
    cout<<count<<"\n";
    
    return 0;
}