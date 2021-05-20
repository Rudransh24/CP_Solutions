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
	int n;
	cin>>n;
	int ar[n];
	set<int> s;
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	    s.insert(ar[i]);
	}
	
	if(s.size()==1)
	cout << -1 << "\n";
	else
	{
	    int ans = *max_element(ar,ar+n);
	    
	    for(int i=0;i<n;i++)
	    {
	        if(i==0)
	        {
	            if(ar[i]==ans)
	            {
	                if(ar[i+1]<ar[i])
	                {
	                    cout << i+1 << "\n";
	                    return;
	                }
	            }
	        }
	        else if(i==n-1)
	        {
	            if(ar[i]==ans)
	            {
	                if(ar[i-1]<ar[i])
	                {
	                    cout << i+1 << "\n";
	                    return;
	                }
	            }
	        }
	        else
	        {
	            if(ar[i]==ans)
	            {
	                if(ar[i-1]<ar[i] || ar[i+1]<ar[i])
	                {
	                    cout << i+1 << "\n";
	                    return;
	                }
	            }
	        }
	    }
	    
	    cout << -1 << "\n";
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