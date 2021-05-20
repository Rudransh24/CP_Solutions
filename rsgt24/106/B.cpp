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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int speed[n],ram[n],hdd[n],cost[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>speed[i]>>ram[i]>>hdd[i]>>cost[i];
    }
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j&&speed[j]<speed[i]&&ram[j]<ram[i]&&hdd[j]<hdd[i])
            {
                cost[j]=INT_MAX;
            }
        }
    }

    cout<<distance(cost,min_element(cost,cost+n))+1<<"\n";
    
    return 0;
}