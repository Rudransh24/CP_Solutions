#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    string x;
    cin >> x;
    
    int ans = 0;
    
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == '0')
        {
            ans += min(b, c + d);
        }
        else
        {
            ans += min(c, b + d);
        }
    }
    
    cout << ans << "\n";
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