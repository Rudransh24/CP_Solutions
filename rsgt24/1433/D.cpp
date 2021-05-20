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
	cout << "NO" << "\n";
	else
	{
	    int check = 0;
	    vector<int> vp;
	    for(int i=0;i<n;i++)
	    {
	        int v = ar[i];
	        int flag = 0;
	        for(int j=0;j<n;j++)
	        {
	            if(v!=ar[j])
	            {
	                vp.pb(i+1);
	                vp.pb(j+1);
	                flag=1;
	                break;
	            }
	        }
	        
	        if(flag==0)
	        {
	            check = 1;
	            break;
	        }
	    }
	    
	    if(check)
	    cout << "NO" << "\n";
	    else
	    {
	        cout << "YES" << "\n";
	        int count = 0;
	        for(int i=vp.size()-1;i>0;i--)
	        {
	            if(count < n-1)
	            {
	                cout << vp[i] << " ";
	                cout << vp[i-1] << "\n";
	                count++;
	                i--;
	            }
	        }
	    }
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