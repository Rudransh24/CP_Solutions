//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n;
    cin >> n;
    
    int ar[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    
    int ans;
    for(auto i: mp)
    {
        if(i.second == 1)
        ans = i.first;
    }
    
    for(int i = 0; i < n; i++)
    {
        if(ar[i] == ans)
        {
            cout << i + 1 << "\n";
            return;
        }
    }
    
    
}

int32_t main() {
	
	selena
	int kk = 1;
	int tc = 1;
	cin >> tc;
	while(tc--){
	    //cout << "Case #" << kk << ": ";
	    solve();
	    kk++;
	}
	return 0;
}