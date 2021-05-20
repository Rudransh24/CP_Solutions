#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define float double

int32_t main(void)
{
    fastio
    float t;
    cin>>t;
    float z=0;
    //cout<<z<<endl;
    //cout<<(float)1/t<<endl;
    for(float i=t;i>=1;i--)
    {
        z=z+float(1/i); 
    }
    cout<<z<<endl;
    return 0;
}