#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back

int32_t main()
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        
        for(int i=0;i<n;i++)
        cin>>ar[i];
        
        int sum=accumulate(ar,ar+n,0);
        
        if(sum%n!=0)
        cout<<sum/n+1<<"\n";
        else
        cout<<sum/n<<"\n";
    }
    return 0;
}