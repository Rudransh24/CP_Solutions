#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {   
              
             int n,k;
             cin>>n>>k;
             string x="";
             for(int i=0;i<n-2;i++)
             x=x+'a';
             x=x+"bb";
             if(k==1)
             cout<<x;
             else
             {
                       int i=1;
                       sort(x.begin(),x.end());
                       while(i!=k)
                       {
                                 next_permutation(x.begin(),x.end());
                                 i++;
                       }
                       cout<<x;
             }
             cout<<endl;
             
    }
    return 0;
}