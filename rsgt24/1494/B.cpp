#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, u, r, l, d;
    cin >> n >> u >> r >> d >> l;
    
    //for 0
    int ans = 0;
    if(d == 0)
    {
        if(l == n || r == n)
        ans = 1;
        
        if(u == 0 && (l == n - 1 || r == n - 1))
        ans = 1;
        
        if((u == 0 || u == 1) && l == n - 1 && r == n - 1)
        ans = 1;
    }
    
    if(u == 0)
    {
        if(l == n || r == n)
        ans = 1;
        
        if(d == 0 && (l == n - 1 || r == n - 1))
        ans = 1;
        
        if((d == 0 || d == 1) && l == n - 1 && r == n - 1)
        ans = 1;
    }
    
    if(l == 0)
    {
        if(u == n || d == n)
        ans = 1;
        
        if(r == 0 && (u == n - 1 || d == n - 1))
        ans = 1;
        
        if((r == 0 || r == 1) && u == n - 1 && d == n - 1)
        ans = 1;
    }
    
    if(r == 0)
    {
        if(u == n || d == n)
        ans = 1;
        
        if(l == 0 && (u == n - 1 || d == n - 1))
        ans = 1;
        
        if((l == 0 || l == 1) && u == n - 1 && d == n - 1)
        ans = 1;
    }
    
    //for 1
    
    if(d == 1)
    {
        if(l == n && r == n)
        ans = 1;
        
        if((u == 0 || u == 1) && (l == n - 1 && r == n))
        ans = 1;
        
        if((u == 0 || u == 1) && (r == n - 1 && l == n))
        ans = 1;
    }
    
    if(u == 1)
    {
        if(l == n && r == n)
        ans = 1;
        
        if((d == 0 || d == 1) && (l == n - 1 && r == n))
        ans = 1;
        
        if((d == 0 || d == 1) && (r == n - 1 && l == n))
        ans = 1;
    }
    
    if(l == 1)
    {
        if(d == n && u == n)
        ans = 1;
        
        if((r == 0 || r == 1) && (d == n - 1 && u == n))
        ans = 1;
        
        if((r == 0 || r == 1) && (u == n - 1 && d == n))
        ans = 1;
    }
    
    if(r == 1)
    {
        if(d == n && u == n)
        ans = 1;
        
        if((l == 0 || l == 1) && (d == n - 1 && u == n))
        ans = 1;
        
        if((l == 0 || l == 1) && (u == n - 1 && d == n))
        ans = 1;
    }
    
    if(ans)
    cout << "NO" << "\n";
    else
    cout << "YES" << "\n";
}

int32_t main(void)
{
    fastio
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}