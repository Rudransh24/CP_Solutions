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

//SOURCE GEEKS FOR GEEKS

int maxProductSubarrayOfSizeK(int A[], int n, int k) 
{ 
	// sorting given input array 
	sort(A, A + n); 

	// variable to store final product of all element 
	// of sub-sequence of size k 
	int product = 1; 

	// CASE I 
	// If max element is 0 and 
	// k is odd then max product will be 0 
	if (A[n - 1] == 0 && (k & 1)) 
		return 0; 

	// CASE II 
	// If all elements are negative and 
	// k is odd then max product will be 
	// product of rightmost-subarray of size k 
	if (A[n - 1] <= 0 && (k & 1)) { 
		for (int i = n - 1; i >= n - k; i--) 
			product *= A[i]; 
		return product; 
	} 

	// else 
	// i is current left pointer index 
	int i = 0; 

	// j is current right pointer index 
	int j = n - 1; 

	// CASE III 
	// if k is odd and rightmost element in 
	// sorted array is positive then it 
	// must come in subsequence 
	// Multiplying A[j] with product and 
	// correspondingly changing j 
	if (k & 1) { 
		product *= A[j]; 
		j--; 
		k--; 
	} 

	// CASE IV 
	// Now k is even 
	// Now we deal with pairs 
	// Each time a pair is multiplied to product 
	// ie.. two elements are added to subsequence each time 
	// Effectively k becomes half 
	// Hence, k >>= 1 means k /= 2 
	k >>= 1; 

	// Now finding k corresponding pairs 
	// to get maximum possible value of product 
	for (int itr = 0; itr < k; itr++) { 

		// product from left pointers 
		int left_product = A[i] * A[i + 1]; 

		// product from right pointers 
		int right_product = A[j] * A[j - 1]; 

		// Taking the max product from two choices 
		// Correspondingly changing the pointer's position 
		if (left_product > right_product) { 
			product *= left_product; 
			i += 2; 
		} 
		else { 
			product *= right_product; 
			j -= 2; 
		} 
	} 

	// Finally return product 
	return product; 
} 

void solve()
{
	int n;
	cin >> n ;
	int ar[n];
	//map<int,int> mp;

    //int max_1=INT_MIN;
	for (int i = 0; i < n; i++)
	{
	    cin >> ar[i];
	   // mp[ar[i]]++;
	}
	
	int ans=0;
	int k = 5; 
	cout << maxProductSubarrayOfSizeK(ar, n, k) <<"\n";
	
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
	//cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}