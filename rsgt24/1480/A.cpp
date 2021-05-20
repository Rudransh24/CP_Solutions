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

	string s;
	cin >> s;
	
	for(int i = 1; i <= s.size(); i++)
	{
	    if(i % 2 == 1)
	    {
	        if(s[i - 1] == 'a')
	        s[i - 1] = 'b';
	        else if(s[i - 1] != 'a')
	        s[i - 1] = 'a';
	    }
	    else
	    {
	        if(s[i - 1] == 'z')
	        s[i - 1] = 'y';
	        else if(s[i - 1] != 'z')
	        s[i - 1] = 'z';
	    }
	}
	
	cout << s << "\n";
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