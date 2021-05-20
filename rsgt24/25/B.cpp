#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
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
    string x;
    cin>>x;
    string z="";
    if(n%3==0)
    {
        for(int i=0;i<n;i++)
        {
            if(i!=0&&i%3==0)
            z=z+"-"+x[i];
            else
            z=z+x[i];
        }
        cout<<z<<"\n";
    }
    else if(n%2==0)
    {
        for(int i=0;i<n;i++)
        {
            if(i!=0&&i%2==0)
            z=z+"-"+x[i];
            else
            z=z+x[i];
        }
        cout<<z<<"\n";
        
    }
    else if(n==1||n==2||n==3)
    cout<<x<<"\n";
    else
    {
        for(int i=0;i<n-3;i++)
        {
            if(i!=0&&i%2==0)
            z=z+"-"+x[i];
            else
            z=z+x[i];
        }
        z=z+"-";
        for(int i=n-3;i<n;i++)
        {
            z=z+x[i];
        }
        
        cout<<z<<"\n";
    }
    
    
    
    cout<<"\n";
    
    
    return 0;
}