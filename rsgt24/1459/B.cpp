//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

//oeis
//https://oeis.org/search?q=4%2C4%2C12%2C9%2C24&sort=&language=english&go=Search

void solve(){

    int n;
    cin >> n;
    
    //cout << 1 + ( 3 * n * (n + 4) + 2 - (-1)^n * (n * (n + 4) + 2) ) / 8 << "\n";
    if(n % 2 == 0)
    {
        cout << 1 + (3 * n * (n + 4) + 2 - (n * (n + 4) + 2)) / 8 << "\n";
    }
    else
    {
        cout << 1 + (3 * n * (n + 4) + 2 + (n * (n + 4) + 2)) / 8 << "\n";
    }
    
    
    
}

int32_t main() {
	
	selena
	int tc = 1;
	//cin >> tc;
	while(tc--){
	    solve();
	}
	return 0;
}