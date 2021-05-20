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
    
    vector<int> ar;
    
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ar.pb(x);
    }
    
    int count = 0;
    int f = 0;
    for(int i = 0; i < ar.size() - 1; i++)
    {
        int x = max(ar[i], ar[i + 1]);
        int y = min(ar[i], ar[i + 1]);
            
        if((double)x / y <= 2)
        continue;
        else
        {
            y *= 2;
            while(y < x)
            {
                y *= 2;
                count++;
            }
        }
    }
    
    cout << count << "\n";
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