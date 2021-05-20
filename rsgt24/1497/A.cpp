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
    map<int, int> mp;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    
    for(int i = 1; i <= 101; i++)
    {
        for(auto x: mp)
        {
            if(x.second != 0)
            {
                cout << x.first << " ";
                mp[x.first] -= 1;
            }
        }
    }
    
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