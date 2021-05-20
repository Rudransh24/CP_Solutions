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
    
    int n, m;
    cin >> n >> m; 
    
    int ar[n];
    for(int i = 0; i < n; i++)
    cin >> ar[i];
    
    int x = 0;
    int y = n - 1;
    
    while(m > 0 && x < y)
    {
        if(ar[x] > 0)
        {
            ar[x]--;
            ar[y]++;
            m--;
        }
        else
        x++;
    }
    
    for(int i = 0; i < n; i++)
    cout << ar[i] << " "; 
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