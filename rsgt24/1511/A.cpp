//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 1e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n;
    cin >> n;
    int ar[n];
    
    //int min_1 = INT_MAX;
    //int max_1 = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        //min_1 = min(min_1, ar[i]);
        //max_1 = max(max_1, ar[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] == 1 or ar[i] == 3)
        count++;
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