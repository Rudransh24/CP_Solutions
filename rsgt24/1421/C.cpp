#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"

void solve()
{
    /*int n,m;
    cin>>n;
    
    char ar[n][n];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
    
    char x = ar[0][1];
    char y = ar[1][0];
    
    char x1 = ar[n-1][n-2];
    char y1 = ar[n-2][n-1];
    
    if(x == '0' && y == '0')
    {
        if(x1 == '0' && y1 == '1')
        {
            cout << 1 << "\n";
            cout << n << " " << n - 1 << "\n";
            
            return;
        }
        
        if(x1 == '1' && y1 == '0')
        {
            cout << 1 << "\n";
            cout << n - 1 << " " << n << "\n";
            
            return;
        }
        
        if(x1 == '0' && y1 == '0')
        {
            cout << 2 << "\n";
            cout << n - 1 << " " << n << "\n";
            cout << n << " " << n - 1 << "\n";
            
            return;
        }
        
        if(x1 == '1' && y1 == '1')
        {
            cout << 0 << "\n";
            return;
        }
        
    }
    
    if(x == '1' && y == '1')
    {
        if(x1 == '0' && y1 == '1')
        {
            cout << 1 << "\n";
            cout << n - 1 << " " << n << "\n";
            
            return;
        }
        
        if(x1 == '1' && y1 == '0')
        {
            cout << 1 << "\n";
            cout << n << " " << n - 1 << "\n";
            
            return;
        }
        
        if(x1 == '0' && y1 == '0')
        {
            cout << 0 << "\n";
            
            return;
        }
        
        if(x1 == '1' && y1 == '1')
        {
            cout << 2 << "\n";
            cout << n - 1 << " " << n << "\n";
            cout << n << " " << n - 1 << "\n";
            return;
        }
    }
    
    
    //space not get confused pls
    
    
    //char x = ar[0][1];
    //char y = ar[1][0];
    
    //char x1 = ar[n-1][n-2];
    //char y1 = ar[n-2][n-1];
    
    if(x == '1' && y == '0')
    {
        if(x1 == '0' && y1 == '1')
        {
            cout << 0 << "\n";
            
            return;
        }
        
        if(x1 == '1' && y1 == '0')
        {
            cout << 2 << "\n";
            cout << n << " " << n - 1 << "\n";
            cout << 2 << " " << 1 << "\n";
            
            return;
        }
        
        if(x1 == '0' && y1 == '0')
        {
            cout << 1 << "\n";
            cout << n - 1 << " " << n << "\n";
            
            return;
        }
        
        if(x1 == '1' && y1 == '1')
        {
            cout << 1 << "\n";
            cout << n << " " << n - 1 << "\n";
            return;
        }
    }
    
    if(x == '0' && y == '1')
    {
        if(x1 == '0' && y1 == '1')
        {
            cout << 2 << "\n";
            cout << n << " " << n - 1 << "\n";
            cout << n - 1 << " " << n << "\n";
            
            return;
        }
        
        if(x1 == '1' && y1 == '0')
        {
            cout << 0 << "\n";
            
            return;
        }
        
        if(x1 == '0' && y1 == '0')
        {
            cout << 1 << "\n";
            cout << n << " " << n - 1 << "\n";
            
            return;
        }
        
        if(x1 == '1' && y1 == '1')
        {
            cout << 1 << "\n";
            cout << n - 1 << " " << n << "\n";
            return;
        }
        
    }*/
    
    string x;
    cin>>x;
    string temp = x;
    
    reverse(temp.begin(),temp.end());
    
    if(temp == x)
    cout << 0 << "\n";
    else
    {
        cout << 3 << "\n";
        int xx = x.size();
        int yx = x.size() - 1;
        //vector <string> v = {"R 2"};
        cout <<"R 2" << "\n";
        cout <<"L " << xx << "\n";
        cout <<"L " << yx << "\n";
        
    }
    
}

int32_t main(void)
{
    fastio
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();   
    }
    return 0;
}