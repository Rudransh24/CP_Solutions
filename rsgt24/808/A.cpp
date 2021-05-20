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
    string x;
    cin>>x;
    if(x.size()==1)
    cout<<1<<"\n";
    else
    {
        int cdigit=0;
        for(int i=0;i<x.size();i++)
        cdigit++;
        string z="1";
        for(int i=0;i<cdigit-1;i++)
        {
            z=z+"0";
        }
        int v=x[0]-'0';
        int q=stoi(x);
        int w=stoi(z);
        int b=(v+1)*w;
        
        cout<<b-q<<"\n";
        
    }
    return 0;
}