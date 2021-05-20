//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 1e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int ar[9] = {2, 16, 128, 1024, 16384, 131072, 1048576, 16777216, 134217728};
    
    int x = ar[c - 1];
    int y = ar[c - 1];
    
    while(1)
    {
        string num = to_string(x);
        int xx = num.size();
        if(xx== a)
        {
            break;
        }
        else
        x *= 7;
    }
    
    while(1)
    {
        string num = to_string(y);
        int xx = num.size();
        if(xx == b)
        {
            break;
        }
        else
        y *= 11;
    }
    
    cout << x << " " << y << "\n";
    
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