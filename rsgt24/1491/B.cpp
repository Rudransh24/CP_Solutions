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
    int n, u, v;
    cin >> n >> u >> v;
    
    int ar[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    
    int x = 0, y = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(abs(ar[i + 1] - ar[i]) == 1)
        x++;
        else if(abs(ar[i + 1] - ar[i]) == 0)
        y++;
    }
    
    int ans = 0;
    if(x == n - 1)
    ans += min(u, v);
    else if(y == n - 1)
    ans += min(2 * v, u + v);
    else if(x + y == n - 1)
    ans += min(u, v);
    
    cout << ans << "\n";
    
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