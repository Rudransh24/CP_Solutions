//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

int intlog(int base, int x) {
    return (int)(log(x) / log(base));
}

void solve(){
    
    int n, m;
    cin >> n >> m;
    
    //indexing based on 1 for better understanding....
    
    int k[n + 1], c[m + 1];
    
    for(int i = 1; i <= n; i++)
    cin >> k[i];
    
    for(int i = 1; i <= m; i++)
    cin >> c[i];
    
    int check = 1;
    int ans = 0;
    
    //sort in decreasing 
    sort(k + 1, k + n + 1, greater<int>());
    
    for(int i = 1; i <= n; i++)
    {
        if(c[check] < c[k[i]])
        {
            ans += c[check];
            check++;
        }
        else
        {
            ans += c[k[i]];
        }
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