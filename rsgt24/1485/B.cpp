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
    int n, q, k;
    cin >> n >> q >> k;
    int ar[n];
    
    for(int i = 0; i < n; i++)
    cin >> ar[i];
    
    if(n == 1)
    {
        while(q--)
        {
            int l, r;
            cin >> l >> r;
            cout << k - 1 << "\n";
        }
    }
    else
    {
        int adj[n] = {0};
        int pref[n] = {1};
        for(int i = 1; i < n - 1; i++)
        {
            adj[i] = ar[i + 1] - ar[i - 1];
            adj[i] -= 1;
        }
        
        for(int i = 1; i < n - 1; i++)
        {
            pref[i] = pref[i - 1] + adj[i];
        }
        
        /*for(int i = 1; i < n - 1; i++)
        {
            cout << adj[i] << " ";
        }
        cout << "\n";
        
        for(int i = 1; i < n - 1; i++)
        {
            cout << pref[i] << " ";
        }
        cout << "\n";*/
        
        
        while(q--)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            if(l == r)
            cout << k - 1 << "\n";
            else if(r - l == 1)
            {
                cout << ar[r] - 1 + k - ar[r - 1] - 2 << "\n";
            }
            else
            {
                cout << ar[l + 1] - 1 + k - ar[r - 1] + pref[r - 1] - pref[l] - r + l - 1 << "\n";
            }
        }
    }
}

int32_t main(void)
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	while (t--)
	{
		solve();
	}
	cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}