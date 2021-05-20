#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back

int32_t main()
{
    fastio
    int d,n;
    cin>>d>>n;
    
    int ar[n];
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(i!=n-1)
        {
            sum=sum+d-ar[i];
        }
    }
    
    cout<<sum<<"\n";
    
    
    return 0;
}