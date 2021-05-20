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
    map<int, int> mp;
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        int x = ar[i] % m;
        mp[x]++;
    }
    
    int count = 0;
    for(int i = 0; i < m; i++)
    {
        int x = i;
        int y = m - i;
        if(mp[x] > 0 && mp[y] > 0)
        {
            int xx = min(mp[x], mp[y]);
            int yy = max(mp[x], mp[y]);
            if(yy > xx + 1)
            count += yy - xx;
            else
            count++;
            
            mp[x] = 0;
            mp[y] = 0;
        }
        else if((mp[x] > 0) || (mp[y] > 0))
        {
            count++;
            if(mp[x] > 0)
            mp[x] = 0;
            else 
            mp[y] = 0;
        }
    }
    
    cout << count << "\n";
    
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