#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

void solve()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    
    for(int i=0;i<n;i++)
    cin>>ar[i];
    
    sort(ar,ar+n, greater<int>());
    
    int sum = 0;
    
    for(int i=1;i<k+1;i++)
       sum += ar[i];
       
       
    cout<<sum + ar[0]<<"\n";
    
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