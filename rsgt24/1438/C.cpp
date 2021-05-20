//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n, m;
    cin >> n >> m;
    
    int ar[n][m];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
            if((i + j) % 2 == 0)
            {
                if(ar[i][j] % 2 == 0)
                continue;
                else
                ar[i][j]++;
                
            }
            else
            {
                if(ar[i][j] % 2 == 0)
                ar[i][j]++;
                else
                continue;
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << "\n";
    }
    
    
    
    
    
    
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