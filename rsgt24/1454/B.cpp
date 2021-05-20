//Show them your progress.....

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
   
    int n;
    cin >> n;
    int ar[n];
    map<int, int> mp;
    vector<int> v;
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    
    for(auto i: mp)
    {
        if(i.second == 1)
        {
            int x = i.first;
            cout << distance(ar, find(ar, ar + n, x)) + 1 << "\n";
            return;
        }
    }
    
    cout << -1 << "\n";
    
    
}

int32_t main() {
	
	selena
	//int jj = 1;
	int tc = 1;
	cin >> tc;
	while(tc--){
	    //cout << "Case #" << jj << ": ";
	    solve();
	    //jj++;
	}
	return 0;
}