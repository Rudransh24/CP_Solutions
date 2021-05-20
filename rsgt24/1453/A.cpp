//Show them your progress.....

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n, m;
    cin >> n >> m;
    
    int ans = n + m;
    set<int> s;
    
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    
    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    
    cout << ans - s.size() << "\n";
    
}
    
    

int32_t main() {
	
	selena
	//int jj = 1;
	int tc = 1;
	cin >> tc;
	while(tc--){
	    //cout << "Case #" << jj << ": ";
	    solve();
	    //jj++;
	}
	return 0;
}