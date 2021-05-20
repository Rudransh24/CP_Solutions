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
const int MAX = 2e6 + 5;
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

int merge(int arr[], int temp[], int left, int mid, int right) 
{ 
    int inv_count = 0; 
  
    int i = left; /* i is index for left subarray*/
    int j = mid;  /* i is index for right subarray*/
    int k = left; /* i is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right)) 
    { 
        if (arr[i] <= arr[j]) 
            temp[k++] = arr[i++]; 
        else
        { 
            temp[k++] = arr[j++]; 
  
            /* this is tricky -- see above explanation/ 
              diagram for merge()*/
            inv_count = inv_count + (mid - i); 
        } 
    } 
  
    /* Copy the remaining elements of left subarray 
     (if there are any) to temp*/
    while (i <= mid - 1) 
        temp[k++] = arr[i++]; 
  
    /* Copy the remaining elements of right subarray 
     (if there are any) to temp*/
    while (j <= right) 
        temp[k++] = arr[j++]; 
  
    /*Copy back the merged elements to original array*/
    for (i=left; i <= right; i++) 
        arr[i] = temp[i]; 
  
    return inv_count; 
} 
  
/* An auxiliary recursive function that sorts the input 
   array and returns the number of inversions in the 
   array. */
int _mergeSort(int arr[], int temp[], int left, int right) 
{ 
    int mid, inv_count = 0; 
    if (right > left) 
    { 
        /* Divide the array into two parts and call 
          _mergeSortAndCountInv() for each of the parts */
        mid = (right + left)/2; 
  
        /* Inversion count will be sum of inversions in 
           left-part, right-part and number of inversions 
           in merging */
        inv_count  = _mergeSort(arr, temp, left, mid); 
        inv_count += _mergeSort(arr, temp, mid+1, right); 
  
        /*Merge the two parts*/
        inv_count += merge(arr, temp, left, mid+1, right); 
    } 
  
    return inv_count; 
} 
  
/* This function sorts the input array and returns the 
   number of inversions in the array */
int countSwaps(int arr[], int n) 
{ 
    int temp[n]; 
    return _mergeSort(arr, temp, 0, n - 1); 
}

void solve()
{
        int n;
	    cin>>n;
        int ar[n];
        
        for(int i=0;i<n;i++)
        cin>>ar[i];
        
        int count = countSwaps(ar, n);
        
        
        if(count >= (n*(n-1))/2)
        cout << "NO" <<" \n";
        else
        cout << "YES" <<"\n";
        
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