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
    int sum = 0;
    string ans = "";
    int c = 0;
    for(int i = 9; i >= 1; i--)
    {
        sum += i;
        if(sum < n)
        {
            ans += to_string(i);
        }
        else if(sum == n)
        {
            ans += to_string(i);
            c = 1;
            break;
        }
        else
        {
            sum -= i;
            continue;
        }
    }
    
    reverse(ans.begin(), ans.end());
    if(c)
    cout << ans << "\n";
    else
    cout << -1 << "\n";

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