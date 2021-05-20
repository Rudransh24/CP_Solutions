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
    
    for(int i = 0; i < n; i++)
    {
        //find msb
        int ans = log2(ar[i]);
        cout << (int)pow(2, ans) << " ";
    }
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