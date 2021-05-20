#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back

int32_t main()
{
    fastio
    int n;
    cin>>n;
    int cashier[n];
    for(int i=0;i<n;i++)
    {
        cin>>cashier[i];
    }
    
    int count[n]={0};
    for(int i=0;i<n;i++)
    {
        int ar[cashier[i]];
        
        for(int j=0;j<cashier[i];j++)
        {
            cin>>ar[j];
            count[i]+=ar[j]*5;
        }
        
        count[i]+=15*cashier[i];
    }
    
    int *min_1=min_element(count,count+n);
    
    cout<<*min_1<<"\n";
    
    
    return 0;
}