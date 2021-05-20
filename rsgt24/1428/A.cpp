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
	
    int x,y,x1,y1;
    cin>>x>>y>>x1>>y1;
    
    int x2 = abs(x - x1);
    int y2 = abs(y - y1);
    
    if(x2 != 0 && y2 != 0)
    cout << x2 + y2 + 2 << "\n";
    else
    cout << x2 + y2 << "\n";
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