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
    
    int n, k;
    cin >> n >> k;
    
    if(k > 3)
    {
        for(int i = 0; i < k - 3; i++)
        cout << 1 << " ";
        
        if(n % 4 == 0)
        cout << n / 2 << " " << n / 4 << " " << n / 4 << "\n";
        else if(n % 2 == 0)
        cout << 2 << " " << (n - 2) / 2 << " " << (n - 2) / 2 << "\n";
        else
        cout << 1 << " " << (n - 1) / 2 << " " << (n - 1) / 2 << "\n";
    }
    else
    {
        if(n % 4 == 0)
        cout << n / 2 << " " << n / 4 << " " << n / 4 << "\n";
        else if(n % 2 == 0)
        cout << 2 << " " << (n - 2) / 2 << " " << (n - 2) / 2 << "\n";
        else
        cout << 1 << " " << (n - 1) / 2 << " " << (n - 1) / 2 << "\n";
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