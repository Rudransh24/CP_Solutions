#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define print(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

//basic mathematics
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}

//modular arithmetic
int powermod(int x, int y, int p)
{
	int res = 1;

	x = x % p;

	if (x == 0) return 0;

	while (y > 0)
	{
		if (y & 1)
			res = (res * x) % p;
		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}

void solve()
{
	/*int n,x;
	cin >> n >> x;
	int ar[n];
	int b[n];

	for (int i = 0; i < n; i++)
		cin >> ar[i];
		
	for (int i = 0; i < n; i++)
		cin >> b[i];
	
	int flag = 0;
	sort(ar,ar+n);
	sort(b,b+n,greater<int>());
	
	for(int i = 0; i<n;i++)
	if(ar[i]+b[i]>x)
	flag=1;
	
	if(!flag)
	cout << "Yes" << "\n";
	else
	cout << "No" << "\n";*/
	
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	cout << max(a + b, c + d) << "\n";
	
}

int32_t main(void)
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
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