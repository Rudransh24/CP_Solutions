//Show them your progress.....

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n, m;
    cin >> n >> m;
    
    int ar[n];
    
    for(int i = 0; i < n; i++)
    cin >> ar[i];
    
    int max_1 = *max_element(ar, ar + n);
    int min_1 = INT_MAX;
    m--;
    
    for(int i = 1; i <= max_1; i++)
    {
        int ele = i;
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(ar[j] != ele)
            {
                count++;
                j += m;
            }
        }
        
        min_1 = min(min_1, count);
    }
    
    cout << min_1 << "\n";
    
    
    
    
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