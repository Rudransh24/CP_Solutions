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
    
    int ar[n];
    
    for(int i = 0; i < n; i++)
    cin >> ar[i];
    
    int ans = 0;
    vector<int> ans1;
    for(int i = n - 1; i >= 0; i--)
    {
        ans = max(ans, ar[i]);
        if(ans > 0)
        ans1.pb(1);
        else
        ans1.pb(0);
        ans--;
    }
    
    reverse(ans1.begin(), ans1.end());
    for(auto i: ans1)
    cout << i << " ";
    cout << "\n";
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