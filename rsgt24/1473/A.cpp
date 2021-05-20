//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

//log of "x", base "base"
int intlog(int base, int x) {
    return (int)(log(x) / log(base));
}

void solve(){
    
    int n, k;
    cin >> n >> k;
    
    int ar[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    
    sort(ar, ar + n);
    
    int f = 0;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] > k)
        f = 1;
    }
    
    if(ar[0] + ar[1] <= k || f == 0)
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