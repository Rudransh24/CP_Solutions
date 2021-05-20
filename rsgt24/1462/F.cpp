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
    int st[n], end[n];
    vector<pair<int, int>> vp;
    for(int i = 0; i < n; i++)
    {
        cin >> st[i] >> end[i];
        vp.pb({st[i], end[i]});
    }

    sort(st, st + n);
    sort(end, end + n);
    
    vector<int> ans;
    int count = 0;
    
    for(int i = 0; i < n; i++)
    {
        
        auto it = lower_bound(end, end + n, vp[i].first);
        
        auto it1 = upper_bound(st, st + n, vp[i].second);
        
        ans.pb(it - end - (it1 - st)  + n);
        
    }

    sort(ans.begin(), ans.end());    
    cout << ans[0] << "\n";
    
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