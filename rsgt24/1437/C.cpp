#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

int power(int x, int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
} 

void solve()
{
    int n;
    cin >> n;
    
    int ar[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
	int ans = 0;
	vector<int> unused;
	int f = 0;
	for(int i = 0; i < n; i++)
    {
        int min_1=INT_MAX;
        int as = 0;
        for(int j = 1; j <= 1000; j++)
        {
            int x = j;
            int z = abs(ar[i] - x);
                vector<int> :: iterator it;
                it = find(unused.begin(), unused.end(), x);
                
                if(z <= min_1 && it==unused.end())
                {
                    min_1 = min(min_1, z);
                    as = x; 
                }
            
            
        }
        
        ans += abs(ar[i] - as);
        unused.pb(as);
    }	
    
    int ans2 = 0;
    sort(ar, ar+n);
    unused.clear();
    f = 0;
	for(int i = 0; i < n; i++)
    {
        int min_1=INT_MAX;
        int as = 0;
        for(int j = 1; j <= 1000; j++)
        {
            int x = j;
            int z = abs(ar[i] - x);
            
                vector<int> :: iterator it;
                it = find(unused.begin(), unused.end(), x);
                
                if(z <= min_1 && it==unused.end())
                {
                    min_1 = min(min_1, z);
                    as = x; 
                }
            
            
        }
        
        ans2 += abs(ar[i] - as);
        unused.pb(as);
    }
    
    int ans3 = 0;
    sort(ar, ar+n, greater<int>());
    unused.clear();
    f = 0;
	for(int i = 0; i < n; i++)
    {
        int min_1=INT_MAX;
        int as = 0;
        for(int j = 1; j <= 1000; j++)
        {
            int x = j;
            int z = abs(ar[i] - x);
            vector<int> :: iterator it;
                it = find(unused.begin(), unused.end(), x);
                
                if(z <= min_1 && it==unused.end())
                {
                    min_1 = min(min_1, z);
                    as = x; 
                }
            
            
        }
        
        ans3 += abs(ar[i] - as);
        unused.pb(as);
    }
    
	cout << min({ans, ans2, ans3}) << "\n";
	
}

int32_t main(void)
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}