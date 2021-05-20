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
	int n, m;
	cin >> n >> m;
	int ar[n][m];
	int ar1[m][n];
	unordered_map<int,int> mp;
	vector<int> v[max(n,m)+1];
	vector<int> v1,v2;
	int ans[n][m];
	
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        cin>>ar[i][j];
	        v[i].pb(ar[i][j]);
	        mp[ar[i][j]] = i;
	    }
	}
	
	
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        cin>>ar1[i][j];
	        if(i == 0)
	        {
	            int y;
	            int x = ar1[i][j];
	            for(auto z: mp)
	            {
	                if(z.first == x)
	                {
	                    y = z.second;
	                    break;
	                }
	            }
	            
	            vector<int> ans = v[y];
	            for(int k=0;k<ans.size();k++)
	            cout<<ans[k]<<" ";
	            cout<<"\n";
	        }
	    }
	}

	//for(int i=0;i<m;i++)
	//{
	 //   for(int j=0;j<n;j++)
	  //  {
	   //     ans[j][i] = ar1[i][j];
	    //}
	//}
	
	//for(int i=0;i<n;i++)
	//{
	 //   for(int j=0;j<m;j++)
	  //  {
	   //     cout << ans[i][j] << " ";
	    //}
	    //cout << "\n";
    //	}
	
	
	
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