#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

string ar[37] = {"1","11","111","1111","2","22","222","2222","3","33","333","3333","4","44","444","4444","5","55","555","5555","6","66","666","6666","7","77","777","7777","8","88","888","8888","9","99","999","9999"};
void solve()
{
	string n;
	cin>>n;
	int x1 = 1;
	int count1 = 0;
	for(int i=0;i<36;i++)
	{
	    if(ar[i]!=n)
	    {
	        count1+=x1;
	        x1++;
	    }
	    else
	    {
	        count1+=x1;
	        break;
	    }
	    if(x1%5==0)
	    x1 = 1;
	}
	
	cout << count1 << "\n";
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