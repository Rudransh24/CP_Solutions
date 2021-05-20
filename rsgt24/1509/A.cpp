//Show them your PROGRESS
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma")

void solve(){
    
    int n;
    cin >> n;
    
    int ar[n];
    vector<int> a, b;
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(ar[i] % 2 == 0)
        a.pb(ar[i]);
        else
        b.pb(ar[i]);
    }
    
    for(int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
        
    for(int i = 0; i < b.size(); i++)
    cout << b[i] << " ";
    
    cout << "\n";
    
    
    
    
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