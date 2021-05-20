#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
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

bool isPowerOfTwo (int x) 
{ 
    return x && (!(x & (x-1))); 
} 

void solve()
{
	int n, k;
	cin >> n >> k;
	
	int ar[n];
	int sum[n];
	int x = 0;
	for(int i = 0; i < n; i++)
	{
	    cin >> ar[i];
	    if(i == 0)
	    sum[i] = ar[i];
	    else
	    sum[i] = ar[i] + sum[i - 1];
	}

    int fans = 0;
	for(int i = 1; i < n; i++)
	{
	    if((ar[i] * 100) > (k * sum[i - 1]))
	    {
	        int ans = ((ar[i] * 100) - (k * sum[i - 1]));
	        
	        if(ans % k == 0)
	        fans += (ans / k);
	        else
	        fans += (ans / k) + 1;
	    }
	    sum[i] = sum[i] + fans;
	}
	
	cout << fans << "\n";
	
	
}

int32_t main(void)
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}