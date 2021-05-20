#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

//Time complexity: O(Log(min(a, b)))
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}

//can make use of __gcd(x, y)
void solve(){

    vector<int> v;
    for(int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    
    sort(v.begin(), v.end());
    cout << v[0] * v[2] << "\n";
}

int32_t main() {
	
	fastio
	int tc = 1;
	cin >> tc;
	while(tc--){
	    solve();
	}
	return 0;
}