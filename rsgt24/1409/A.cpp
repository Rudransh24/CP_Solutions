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

vector<int> graph[100000];
bool visited[100000];
int total=0;

int dfs(int v){
    
	visited[v] = 1;
	int z = 1;
	for(auto x: graph[v]){
	    
		if(visited[x] == 0)
		{
		    z += dfs(x);
		}
		
	}
	
	return z;
}

void solve()
{
    
    int a,b;
    cin>>a>>b;
    if(a==b)
    cout<<0<<"\n";
    else
    {
        if(abs(a-b)%10==0)
        cout<<abs(a-b)/10<<"\n";
        else
        cout<<abs(a-b)/10+1<<"\n";
    }
}

int32_t main(void)
{
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
	fastio
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}