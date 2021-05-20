//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n, x;
    cin >> n >> x;
    
    int sum = 0;
    int cnt = 0, cnt1 = 0;
    int ar[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
        cnt += ceil((double)ar[i] / x);
    }
    
    cnt1 = ceil((double)sum / x);
    
    cout << min(cnt1, cnt) << " " << max(cnt, cnt1) << "\n";
    
    
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