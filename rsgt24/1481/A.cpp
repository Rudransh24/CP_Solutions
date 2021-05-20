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
	int n, m;
	cin >> n >> m;
	
	string s;
	cin >> s;
	
	map<char, int> mp;
	
	for(int i = 0; i < s.size(); i++)
	mp[s[i]]++;
	
	//for(auto i: mp)
	//cout << i.first << " " << i.second << "\n";
	
	int can = 0;
	if(n >= 0 && m >= 0)
	{
	    if(mp['R'] >= n && mp['U'] >= m)
	    can = 1;
	    
	}
	
	if(n >= 0 && m <= 0)
	{
	    if(mp['R'] >= n && mp['D'] >= abs(m))
	    can = 1;
	}
	
	if(n <= 0 && m >= 0)
	{
	    if(mp['L'] >= abs(n) && mp['U'] >= m)
	    can = 1;
	    
	}
	
	if(n <= 0 && m <= 0)
	{
	    if(mp['L'] >= abs(n) && mp['D'] >= abs(m))
	    can = 1;
	    
	}
	
	
	if(can)
	cout << "YES" << "\n";
	else cout << "NO" << "\n";
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