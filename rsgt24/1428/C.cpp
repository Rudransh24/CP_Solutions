#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 400005;
const int MAXN = 100000;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"

void solve()
{
	//int n;
	//cin>>n;
	string x;
	cin>>x;
	int count = 0;
	int count1 = 0;
	int n = x.size();
	for(int i=0;i<n;i++)
	{
	    if(x[i] == 'A')
	    count++;
	    else
	    {
	        if(count>0)
	        count--;
	        else if(count1>0)
	        count1--;
	        else
	        count1++;
	        
	    }
	}
	
	cout << count1 + count << "\n";
	
}


int32_t main(void)
{
	fastio
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}