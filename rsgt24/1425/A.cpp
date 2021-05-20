/******

AUTHOR : RUDRANSH TRIPATHI, IIIT NAGPUR, CCID(rt24) & CFID(rsgt24)

MOTTO : Use criticism as fuel and you will never run out of energy.
        AIM : TO BECOME A BETTER CODER
        INTROSPECT + COURSE CORRECTIONS = CATALYST FOR SUCCESS
        Every moment is an opportunity to better yourself

*******/

#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

void solve()
{
	int n;
	cin >> n;
	if (n % 2 == 0)
	{
		int ans = 0;
		int i = 0;
		while (n)
		{
			if (i % 2 == 0)
			{
				if (n % 2 == 1)
				{
					ans += 1;
					n = n - 1;
				}
				else
				{
					n = n / 2;
					ans += n;
				}
			}
			else
			{
				if (n % 2 == 1)
				{
					n = n - 1;
				}
				else
				{
					n = n / 2;
				}
			}
			i++;
		}
		cout << ans << "\n";
	}
	else
	{
		if (n == 1)
			cout << 1 << "\n";
		else
		{
			int ans = 0;
			int i = 0;
			int k = n;
			n = n - 1;
			while (n)
			{
				if (i % 2 == 0)
				{
					if (n % 2 == 1)
					{
						ans += 1;
						n = n - 1;
					}
					else
					{
						n = n / 2;
						ans += n;
					}
				}
				else
				{
					if (n % 2 == 1)
					{
						n = n - 1;
					}
					else
					{
						n = n / 2;
					}
				}
				i++;
			}
			cout << k - ans << "\n";
		}
	}

}

int32_t main(void)
{
	fastio
	int ak = 1;
	int t = 1;
	cin >> t;
	while (t--)
	{
		//cout << "Case #" << ak << ": ";
		solve();
		//ak++;
	}
	//cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}