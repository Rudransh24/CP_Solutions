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
    int u, v;
    cin >> u >> v;
    
    if(u > v)
    cout << "NO" << "\n";
    else
    {
        int x = __builtin_popcount(u);
        int y = __builtin_popcount(v);
        
        if(x >= y)
        cout << "YES" << "\n";
        else
        cout << "NO" << "\n";
    }
    
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