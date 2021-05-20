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
    
    vector<int> v;
    
    if(k & 1)
    {
        int sum = k;
        for(int i = k / 2 + 1; i <= n; i++)
        {
            if(i != sum)
            v.pb(i);
        }
    }
    else
    {
        int sum = k;
        for(int i = k / 2; i <= n; i++)
        {
            if(i != sum)
            v.pb(i);
        }
    }
    
    cout << v.size() << "\n";
    for(auto i: v)
    cout << i << " ";
    
    cout << "\n";
    
    
}

int32_t main() {
	
	selena
	int tc;
	cin >> tc;
	while(tc--){
	    solve();
	}
	return 0;
}