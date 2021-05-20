//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n, m;
    cin >> n;
    
    int ar[n];
    int f =0;
    map<int, int> mp;
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
        if(mp[ar[i]] >= 2)
        f = 1;
    }
    
    if(f)
    cout << "YES" << "\n";
    else
    cout << "NO" << "\n";
    
    
    
    
    
}

int32_t main() {
	
	selena
	int tc;
	cin >> tc;
	while(tc--){
	    solve();
	}
	return 0;
}