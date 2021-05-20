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
    string s;
    cin >> s;
    int ans = 0;
    int count = 0;
    int f = 0;
    reverse(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ')')
        count++;
        else
        {
            f = 1;
            ans = count;
            break;
        }
    }
    
    if(f == 0)
    ans = count;
    
    if(ans > s.size() - ans)
    cout << "Yes" << "\n";
    else
    cout << "No" << "\n";
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