#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
 
int32_t main(void)
{
    fastio
    int n,m,h;cin>>n>>m>>h;
    int a[m],b[n],box[n][m];
    for(int i=0;i<m;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>box[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(box[i][j]==1)
            {
                box[i][j]=min(a[j],b[i]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cout<<box[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}