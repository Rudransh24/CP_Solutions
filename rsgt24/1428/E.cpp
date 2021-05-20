#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 400005;
const int MAXN = 100000;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"

vector<int> v;

void split(int x, int n) 
{ 
    if (x % n == 0) 
	{ 
		for(int i=0;i<n;i++) 
		v.pb(x/n); 
	} 
	else
	{ 
		int zp = n - (x % n); 
		int pp = x/n; 
		for(int i=0;i<n;i++) 
		{ 

			if(i>= zp) 
			v.pb((pp + 1)); 
			else
			v.pb(pp); 
		} 
	} 
} 

int ans1 = 0;

void printPartition(int n, int m) 
{ 
	int k = n / m;

	int ct = n % m; 
	int i; 

	for (i = 1; i <= ct; i++) 
		ans1 += (k+1)*(k+1); 

	for (; i <= m; i++) 
		ans1 += (k)*(k); 
} 

void solve()
{
	int n,k;
	cin>>n>>k;
	int sum = 0;
	int ar[n];
	for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    
    //if(k<=sum)
    split(sum,k);
    printPartition(sum,k);
    int ans = 0;
    
    for(int i=0;i<v.size();i++)
    {
        ans += v[i]*v[i];
    }
    cout<<ans1<<"\n";
	
	
	
	
	
	
	
}


int32_t main(void)
{
	fastio
	int t = 1;
	//cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}