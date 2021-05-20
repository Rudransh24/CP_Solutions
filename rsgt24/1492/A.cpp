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
    
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int x = a % b;
    int y = a % c;
    int z = a % d;
    
    x = b - x;
    y = c - y;
    z = d - z;
    
    if(a == b || a == c || a == d || a % b == 0 || a % c == 0 || a % d == 0)
    cout << 0 << "\n";
    else
    cout << min({x, y, z}) << "\n";
    
    
    /*int n;
    cin >> n;
    
    int ar[n];
    vector<int> v;
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        v.pb(ar[i]);
    }
    
    vector<int> ans;
    int x = n;
    while(x > 0)
    {
        int max_1 = *max_element(v.begin(), v.end());
        int f = 0;
        int ind = -1;
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] == max_1)
            {
                f = 1;
                ind  = i;
            }
            if(f == 1)
            {
                ans.pb(v[i]);
                x--;
            }
        }
        
        v.erase(v.begin() + ind, v.begin() + v.size());
    }
    
    for(int i = 0; i < n; i++)
    cout << ans[i] << " ";
    cout << "\n";*/
}

int32_t main(void)
{
          fastio
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