#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int ar[n];
       for(int i=0;i<n;i++)
       cin>>ar[i];
       set<int>cd;
       for(int i=0;i<n;i++)
        {
             cd.insert(ar[i]);
        }
       int z = cd.size();
       cout<<z<<endl;
    }
    return 0;
}