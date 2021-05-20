#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

int32_t main()
{
    fastio
    string x,y;
    cin>>x>>y;
    int j=0;
    for(int i=0;i<y.size();i++)
    {
        if(y[i]!=x[j])
        continue;
        else
        {
            j++;
        }
       
    }
    cout<<j+1<<"\n";
    return 0;
}