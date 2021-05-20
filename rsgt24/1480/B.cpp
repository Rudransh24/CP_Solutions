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
    int A, B, n;
    cin >> A >> B >> n;
    
    int a[n], b[n];
    vector<pair<int, int>> vp;
    
    int max_1 = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        max_1 = max(max_1, a[i]);
    }
    
    for(int j = 0; j < n; j++)
    cin >> b[j];
    
    for(int i = 0; i < n; i++)
    {
        vp.pb({a[i], b[i]});
    }
    
    sort(vp.begin(), vp.end());
    
    int f = 0;
    int fl = 0;
    
    for(int i = 0; i < n; i++)
    {
        int x = B;
        int y = vp[i].second;
        
        int cnt1 = 0, cnt2 = 0;
        
        if(y % A == 0)
        cnt1 = y / A;
        else
        cnt1 = y / A + 1;
        
        
        B -= cnt1 * vp[i].first;
    }
    
    //cout << B << "\n";
    if((B + max_1) > 0)
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