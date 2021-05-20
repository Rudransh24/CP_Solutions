#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

int32_t main()
{
    fastio
    int n,m;
    cin>>n>>m;
    char ar[n][m];
    int flag=0;
    
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        for(int j=0;j<m;j++)
        {
            cout<<'#';
        }
        else if(i%2!=0&&flag==0)
        {
            for(int j=0;j<m;j++)
            {
                if(j!=m-1)
                cout<<'.';
                else
                cout<<'#';
            }
            flag=1;
        }
        else
        {
            for(int j=0;j<m;j++)
            {
                if(j!=0)
                cout<<'.';
                else
                cout<<'#';
            }
            flag=0;
        }
        cout<<"\n";
        
    }
    return 0;
}