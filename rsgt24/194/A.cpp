#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define print(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

void solve()
{
          int n, m;
          cin >> n >> m;
          
          if(3*n >= m )
          cout << 3*n - m << "\n";
          else
          cout << 0 << "\n";
}

int32_t main(void)
{
          fastio
	int t = 1;
	//cin >> t;
	while (t--)
	{
		solve();
	}
	//cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}