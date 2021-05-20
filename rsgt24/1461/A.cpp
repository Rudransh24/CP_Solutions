//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n, k;
    cin >> n >> k;
    
    string x = "";
    for(int i = 1; i <= k; i++)
    x += 'c';
    
    int f = 0;
    for(int i = k + 1; i <= n; i++)
    {
        if(f == 0)
        {
            x += 'a';
            f = 1;
        }
        else if(f == 1)
        {
            x += 'b';
            f = 2;
        }
        else
        {
            x += 'c';
            f = 0;
        }
    }
    
    cout << x << "\n";
    
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