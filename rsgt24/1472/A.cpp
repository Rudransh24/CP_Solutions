//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int w, h, n;
    cin >> w >> h >> n;
    
    int count = 1;
    while(1)
    {
        if(w % 2 == 0)
        {
            count*=2;
            w /= 2;
            continue;
        }
        else
        break;
    }
    
    while(1)
    {
        if(h % 2 == 0)
        {
            count*=2;
            h /= 2;
            continue;
        }
        else
        break;
    }
    
    if(count >= n)
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