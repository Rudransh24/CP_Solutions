/******

AUTHOR : RUDRANSH TRIPATHI, IIIT NAGPUR, CCID(rt24) & CFID(rsgt24)

MOTTO : Use criticism as fuel and you will never run out of energy.
        AIM : TO BECOME A BETTER CODER
        INTROSPECT + COURSE CORRECTIONS = CATALYST FOR SUCCESS
        Every moment is an opportunity to better yourself

*******/

#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define print(x) cout<<x<<"\n"
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

//modular arithmetic
int powermod(int x, int y, int p)
{
	int res = 1;

	x = x % p;

	if (x == 0) return 0;

	while (y > 0)
	{
		if (y & 1)
			res = (res * x) % p;
		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}

//Prime numbers till n precomputation - range query
int prefix[MAX + 1];

void buildPrefix()
{
	bool prime[MAX + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= MAX; p++) {
		if (prime[p] == true) {
			for (int i = p * 2; i <= MAX; i += p)
				prime[i] = false;
		}
	}
	prefix[0] = prefix[1] = 0;
	for (int p = 2; p <= MAX; p++) {
		prefix[p] = prefix[p - 1];
		if (prime[p])
			prefix[p]++;
	}
}

int query(int L, int R)
{
	return prefix[R] - prefix[L - 1];
}


//Find all paths from a to b in an undirected graph
vector<int> g[MAX];
int visited[MAX];
//count of all the paths from 1 to n;

void dfs(int visited[MAX], int u, int v, vector<int> path)
{
	visited[u] = 1;
	if (u == v)
	{
		for (int i = 0; i < path.size(); i++)
		{
			cout << path[i] << " ";
		}
		cout << "\n";
	}
	else
	{
		for (int i = 0; i < g[u].size(); i++)
		{
			int y = g[u][i];

			if (visited[y] == 0)
			{
				visited[y] = 1;
				path.pb(y);
				dfs(visited, y, v, path);
				path.pop_back();
			}

		}
	}

	visited[u] = 0;

}

vector<int> graph[MAX];
int vis[MAX];

void dfs(int v)
{
	vis[v] = 1;
	
	for(auto x: graph[v]){
	    
		if(vis[x] == 0)
		{
		    dfs(x);
		}
		
	}
}

int getMaxLength(bool arr[], int n) 
{ 
    int count = 0; //intitialize count 
    int result = 0; //initialize max 
  
    for (int i = 0; i < n; i++) 
    { 
        // Reset count when 0 is found 
        if (arr[i] == 0) 
            count = 0; 
  
        // If 1 is found, increment count 
        // and update result if count becomes 
        // more. 
        else
        { 
            count++;//increase count 
            result = max(result, count); 
        } 
    } 
  
    return result; 
} 

void solve()
{
	int n;
	cin >> n;
	
	int ar[n];
	int b[n];
	
	
	for (int i = 0; i < n; i++)
		cin >> ar[i];
		
	for (int i = 0; i < n; i++)
		cin >> b[i];
	
	sort(b, b+n);
	int max_1 = *max_element(ar, ar+n);
	int ans = 0;
	int ans1 = 0;
	int ans2 = INT_MIN;
	for(int i = 0; i < n; i++)
	{
	    ans += b[i];
	    //cout << ans << " " << max_1 << "\n";
	    if(ans < max_1)
	    ans1 = ans;
	}
	
	if(ans1 == 0)
	cout << max_1 << "\n";
	else
	cout << ans1 << "\n";
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