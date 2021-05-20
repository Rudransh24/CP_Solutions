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
    
    int ar[n];
    vector<int> v;
    map<int, int> mp;
    map<int, int> mp1;
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]] = i;
    }
    
    vector<int> ans;
    int x;
    for(int i = n; i >= 1; i--)
    {
        if(i == n)
        {
            if(mp1[i] != 1)
            {
                for(int j = mp[i]; j < n; j++)
                {
                   cout << ar[j] << " ";
                    mp1[ar[j]] = 1;
                }
                x = mp[i];
            }
        }
        else
        {
            if(mp1[i] != 1)
            {
                for(int j = mp[i]; j < x; j++)
                {
                    cout << ar[j] << " ";
                    mp1[ar[j]] = 1;
                }
                x = mp[i];
            }
        }
    }
    cout << "\n";
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