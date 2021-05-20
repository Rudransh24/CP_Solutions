#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

int ar[20] = { 1, 1, 1, 3, 8, 40, 180, 1260, 8064, 72576, 604800, 6652800, 68428800, 889574400, 10897286400, 163459296000, 2324754432000, 39520825344000,640237370572800,12164510040883200
};

void solve()
{
	int n;
	cin>>n;
	
	cout << ar[n-1] << "\n";
	
	
}

int32_t main(void)
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	int t = 1;
	//cin >> t;
	while (t--)
	{
		solve();
	}
	cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}