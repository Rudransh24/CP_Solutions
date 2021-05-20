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

int firstMissingPos(int A[], int n) 
{ 
  
    // To mark the occurrence of elements 
    bool present[n + 1] = { false }; 
  
    // Mark the occurrences 
    for (int i = 0; i < n; i++) { 
  
        // Only mark the required elements 
        // All non-positive elements and 
        // the elements greater n + 1 will never 
        // be the answer 
        // For example, the array will be {1, 2, 3} 
        // in the worst case and the result 
        // will be 4 which is n + 1 
        if (A[i] > 0 && A[i] <= n) 
            present[A[i]] = true; 
    } 
  
    // Find the first element which didn't 
    // appear in the original array 
    for (int i = 1; i <= n; i++) 
        if (!present[i]) 
            return i; 
  
    // If the original array was of the 
    // type {1, 2, 3} in its sorted form 
    return n + 1; 
} 

int findFirstMissing(int array[],  
                    int start, int end) 
{ 
    if (start > end) 
        return end + 1; 
  
    if (start != array[start]) 
        return start; 
  
    int mid = (start + end) / 2; 
    if (array[mid] == mid) 
        return findFirstMissing(array,  
                            mid+1, end); 
  
    return findFirstMissing(array, start, mid); 
}

int removeDuplicates(int arr[], int n) 
{ 
    if (n==0 || n==1) 
        return n; 
  
    // To store index of next unique element 
    int j = 0; 
  
    // Doing same as done in Method 1 
    // Just maintaining another updated index i.e. j 
    for (int i=0; i < n-1; i++) 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
  
    arr[j++] = arr[n-1]; 
  
    return j; 
}



void solve()
{
	int n;
	cin >> n ;
	int ar[n];
	map<int,int> mp;

    
	for (int i = 0; i < n; i++)
	{
	    cin >> ar[i];
	}
	
	sort(ar,ar+n,greater<int>());
	
	vector<int> v1;
	vector<int> v2;
	v1.pb(ar[0]);
	
	for(int i=1;i<n;i++)
	{
	  
	    if(ar[i]==ar[i-1])
	    v2.pb(ar[i]);
	    else
	    v1.pb(ar[i]);
	    
	}
	int xx = v1.size()-1;
	int yy = v2.size()-1;
	
	int ar1[xx];
	int ar2[yy];
	
	set<int> s1;
	set<int> s2;
	
	for(int i=0;i<v1.size();i++)
	{
	    ar1[i]=v1[i];
	    s1.insert(ar1[i]);
	}
	
	for(int i=0;i<v2.size();i++)
	{
	    ar2[i]=v2[i];
	    s2.insert(ar2[i]);
	}
	
	xx=s1.size()-1;
	yy=s2.size()-1;
	
	int newa[s1.size()];
	int newy[s2.size()];
	
	int q=0;
	int w=0;
	for(auto i:s1)
	{
	    newa[q]=i;
	    q++;
	}
	
	for(auto i:s2)
	{
	    newy[w]=i;
	    w++;
	}
    

	int x =0,y=0;
	
	int low = 0, high = xx;
	int low1 = 0, high1 = yy;
	
	if(v1.size()!=0)
	x = findFirstMissing(newa, low, high); 
	
	if(v2.size()!=0)
	y = findFirstMissing(newy, low1, high1); 
	
	//cout<< x<< y<<"\n";
	cout<<x+y<<"\n";
	
	
	
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