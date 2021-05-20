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
    cin >> n;
    
    if(n == 1)
    cout << 1 << "\n";
    else if(n == 2)
    cout << 3 << "\n";
    else
    {
        int ans = 0;
        int count = 0;
        for(int i = 1; i <= n; i++)
        {
            ans += i;
            if(ans >= n)
            {
                break;
            }
            else
            count++;
        }
        
        ans -= n;
        
        if(ans == 1)
        cout << count + 2 << "\n";
        else
        cout << count + 1 << "\n";
    }
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