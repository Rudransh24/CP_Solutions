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
    
    int x = k - (n - k);
    int y = k;
    
    int f = 0;
    for(int i = 0; i < k; i++)
    {
        if(i + 1 == x)
        f = 1;
        
        if(f)
        {
            cout << y << " ";
            y--;
        }
        else
        cout << i + 1 << " ";
    }
    
    cout << "\n";
}

int32_t main() {
	
	selena
	int tc = 1;
	cin >> tc;
	cin.ignore();
	while(tc--){
	    solve();
	}
	return 0;
}