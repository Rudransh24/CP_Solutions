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
	
	int ar[n][n];
	
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        if(i==j || i + j == n - 1)
	        ar[i][j]=1;
	        else
	        ar[i][j]=0;
	    }
	}
	
	if(n&1)
	{
	    ar[n/2 + 1][n/2] = 1;
	    ar[n/2][n/2 + 1] = 1;
	}
	
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        cout << ar[i][j] << " ";
	    }
	    cout << "\n";
	}
	
	
	
	
	
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