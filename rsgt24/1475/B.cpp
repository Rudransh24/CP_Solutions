#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define deb(x) cout << x << "\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

//

void solve()
{
	int n;
	cin >> n;

	//meaning of dry run...
	//cout << n << "\n";
	//2020 * x + 2021 * y = n;
	//always true.....

	int flag = 0;

	//2020 * 1000 = 2020000 > 1000000
	for (int i = 0; i < 1000; i++)
	{
		int ans = n - (2020 * i);
		//cout << ans << " ";
		if (ans % 2021 == 0 && ans > 0)
		{
			flag = 1;
		}
	}

	if (flag == 1 || n % 2020 == 0)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";

}

//int32_t
//int64_t
//int128_t

int32_t main(void)
{
	/*#ifndef ONLINE_JUDGE
		freopen("i1.txt", "r", stdin);
		freopen("o1.txt", "w", stdout);
	#endif*/
	selena
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}