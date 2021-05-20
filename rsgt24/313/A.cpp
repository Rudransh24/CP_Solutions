#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

int32_t main()
{
    fastio
    int n;
    cin>>n;
    if(n>=0)
    cout<<n<<"\n";
    else if(n==-10||n==-20||n==-30||n==-40||n==-50||n==-60||n==-70||n==-80||n==-90)
    cout<<"0"<<"\n";
    else
    {
        string z="";
        z=z+to_string(n);
        if(z[z.size()-1]-'0'>z[z.size()-2]-'0')
        {
            for(int i=0;i<z.size();i++)
            {
                if(i!=z.size()-1)
                cout<<z[i];
            }
        }
        else
        {
            for(int i=0;i<z.size();i++)
            {
                if(i!=z.size()-2)
                cout<<z[i];
            }
            
        }
    }
    
    return 0;
}