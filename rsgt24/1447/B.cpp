//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n, m;
    cin >> n >> m;
    
    int ar[n][m];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        cin >> ar[i][j];
    }
    
    int count = 0;
    int min_1 = INT_MAX;
    
    int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(ar[i][j] < 0)
            count++;
            
            sum += abs(ar[i][j]);
            min_1 = min(min_1, abs(ar[i][j]));
        }
    }
    
    
    if(count % 2 == 0)
    cout << sum << "\n";
    else
    cout << sum - 2*(min_1) << "\n";
    
    
    
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