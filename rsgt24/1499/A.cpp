//Show them your PROGRESS
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma")

void solve(){
    
    int n, k1, k2, w, b;
    cin >> n >> k1 >> k2 >> w >> b;
    
    if(((k1 + k2) >= 2 * w) && ((2 * n - k1 - k2) >= 2 * b))
    cout << "YES" << "\n";
    else
    cout << "NO" << "\n";
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