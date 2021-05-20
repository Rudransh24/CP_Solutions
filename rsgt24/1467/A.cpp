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
    
    int n, m;
    cin >> n;
    
    if(n <= 3)
    {
        if(n == 1)
        cout << 9 << "\n";
        else if(n == 2)
        cout << 98 << "\n";
        else 
        cout << 989 << "\n";
    }
    else
    {
        cout << 989;
        string x = "";
        int m = 0;
        for(int i = 4; i <= n; i++)
        {
            x += to_string(m);
            m++;
            if(m == 10)
            m = 0;
        }
        cout << x << "\n";
    }
    
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