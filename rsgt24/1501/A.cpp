//Show them your PROGRESS
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n;
    cin >> n;
    
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        
        v.pb({x, y});
    }
    
    int t[n];
    for(int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    
    int ans = 0;
    int dep = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(i == n - 1)
        {
            int y = (v[i].second - v[i].first + 1) / 2;
            int x = t[i] + v[i].first - dep;
            ans += x;
        }
        else
        {
            int y = (v[i].second - v[i].first + 1) / 2;
            int x = t[i] + v[i].first - dep;
            ans += x + y;
            if(ans < v[i].second)
            ans += (v[i].second - ans);
        }
        
        dep = v[i].second;
       
    }
    
    cout << ans << "\n";
}

int32_t main() {
	
	selena
	int tc = 1;
	cin >> tc;
	while(tc--){
	    solve();
	}
	return 0;
}