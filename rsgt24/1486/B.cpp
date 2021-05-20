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
    int n;
    cin >> n;
    int k = n;
    int a[n], b[n];
    int i = 0;
    while(k--)
    {
        int u, v;
        cin >> u >> v;
        a[i] = u;
        b[i] = v;
        i++;
    }
    
    sort(a, a + n);
    sort(b, b + n);
    
    if(n % 2 == 1)
    cout << 1 << "\n";
    else
    {
        int x = n / 2;
        int x1 = a[x];
        int x2 = a[x - 1];
        int y1 = b[x];
        int y2 = b[x - 1];
        
        //cout << x1 << " " << x2 << " " << y1 << " " << y2 << "\n";
        int ans = x1 - x2 + 1;
        int ans1 = y1 - y2 + 1;
        
        cout << ans * ans1 << "\n";
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