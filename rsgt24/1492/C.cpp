#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

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
    
    //n -> s
    //m -> t 
    
    string s, t;
    cin >> s;
    cin >> t;
    
    unordered_map<char, vector<int>> mp;
    
    for(int i = 0; i < n; i++)
    {
        mp[s[i]].pb(i + 1);
    }
    
    int fans = 0;
    for(int i = 0; i < m - 1; i++)
    {
        vector<int> x = mp[t[i]];
        vector<int> y = mp[t[i + 1]];
        
        int xx = x[0];
        int yy = y[y.size() - 1];
        
        int ans = yy - xx;
        fans = max(fans, ans);
    }
    cout << fans << "\n";

}

int32_t main(void)
{
          fastio
	int t = 1;
	while (t--)
	{
		solve();
	}
	cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}