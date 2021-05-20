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
#define int unsigned long long int
#define pb push_back
#define d(x) cout<<x<<"\n"

void solve()
{
	int n;
	cin >> n ;
	int ar[n];

	for (int i = 0; i < n; i++)
		cin >> ar[i];

	sort(ar, ar + n);

	int ans = 1e14;
	int num = 1;
	for (int i = 1; i <= 31623; i++)
	{
		int s = 0;
		int k = 1;
		int x = 0;
		for (int j = 0; j < n; j++)
		{
		    if(ar[j]>=k)
			s += ar[j] - k;
			else
			s += k - ar[j];
			
			if(s > ans)
			{
			    x = 1;
			    break;
			}
			
			k*=i;
		}
		if(x)
		break;
		if (s < ans)
		{
			ans = s;
			num = i;
		}
	}
	
	//cout<<num<<"\n";
	cout<<ans<<"\n";
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
	return 0;
}