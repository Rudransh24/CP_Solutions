#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"

void solve()
{
    int n,m;
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
    
    /*if(x == '0' && y == '0')
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
    
    
    //char x = ar[0][1];
    //char y = ar[1][0];
    
    //char x1 = ar[n-1][n-2];
    //char y1 = ar[n-2][n-1];
    
    if(x == y)
    {
        if(x1 == y1)
        {
            if(x != x1)
            cout << 0 << "\n";
            else
            {
                cout << 2 << "\n";
                cout << 2 << " " << 1 << "\n";
                cout << 1 << " " << 2 << "\n";
            }
        }
        else
        {
            if(x != x1)
            {
                cout << 1 << "\n";
                cout << n - 1 << " " << n<< "\n";
            }
            else
            {
                
                cout << 1 << "\n";
                cout << n << " " << n - 1 << "\n";
            }
        }
    }
    else
    {
        if(x1 == y1)
        {
            if(x == x1)
            {
                cout << 1 << "\n";
                cout << 1 << " " << 2 << "\n";
            }
            else
            {
                cout << 1 << "\n";
                cout << 2 << " " << 1 << "\n";
            }
        }
        else
        {
            if(x == x1)
            {
                cout << 2 << "\n";
                cout << n << " " << n - 1 << "\n";
                cout << 2 << " " << 1 << "\n";
                return;
            }
            if(x == y1)
            {
                cout << 2 << "\n";
                cout << n - 1 << " " << n<< "\n";
                cout << 2 << " " << 1 << "\n";
                return;
            }
            if(y == x1)
            {
                cout << 2 << "\n";
                cout << n << " " << n - 1 << "\n";
                cout << 1 << " " << 2 << "\n";
                return;
            }
            if(y == y1)
            {
                cout << 2 << "\n";
                cout << n - 1 << " " << 1 << "\n";
                cout << 1 << " " << 2 << "\n";
                return;
            }
            
        }
    }
    
}

int32_t main(void)
{
    fastio
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();   
    }
    return 0;
}