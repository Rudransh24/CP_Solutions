#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int unsigned long long int
#define pb push_back
#define mp make_pair
#define d(x) cout<<x<<"\n"


int32_t main()
{
    fastio
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,k;
    cin>>n>>k;
    int ar[n];
    int cz=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int j=k-1;
    for(int i=j;i<n;)
    {
        
        if(ar[i]==1)
        {
            cout<<i+1<<"\n";
            break;
        }
        else if(i==n-1)
        {
            j=0;
            i=j;
        }
        else
        i++;
    }
    return 0;
}