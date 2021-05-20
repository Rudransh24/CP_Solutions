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
	int n, d;
	cin >> n >> d;
	int ar[n];

	for(int i = 0; i < n; i++)
	{
	    cin >> ar[i];
	    int x = ar[i];
	    int ans = 0;
	    string v = to_string(x);
	    for(int j = 0; j < v.size(); j++)
	    {
	        int cmp = v[j] - '0';
	        if(cmp == d)
	        ans = 1;
	    }
	    
	    if(ans == 0)
	    while(x >= 0)
	    {
	        int f = 0;
	        string xx = to_string(x);
	        for(int j = 0; j < xx.size(); j++)
	        {
	            int cmp = xx[j] - '0';
	            if(cmp == d)
	            {
	                f = 1;
	                break;
	            }
	        }
	        
	        if(f)
	        {
	            ans = 1;
	            break;
	        }
	        else
	        x -= d;
	    }
	    
	    if(ans)
	    cout << "YES" << "\n";
	    else
	    cout << "NO" << "\n";
	}
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