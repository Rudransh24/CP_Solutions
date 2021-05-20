#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        if(s<10)
        {
            cout<<s<<endl;
            continue;
        }
        int x=s*10/9;
        if(s%9==0)
        cout<<x-1<<endl;
        else
        cout<<x<<endl;
    }
    return 0;
}