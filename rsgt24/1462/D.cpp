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
    
    for(int i = 0; i < n; i++)
    cin >> ar[i];
    
    
    int sum = 0;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        sum += ar[i];
        int f = 1;
        int temp = 0;
        for(int j = i + 1; j < n; j++)
        {
            temp += ar[j];
            if(sum == temp)
            {
                f = 1;
                temp = 0;
                count++;
            }
            else if(temp > sum)
            {
                f = 0;
                break;
            }
            else 
            f = 0;
        }
        
        if(f)
        ans = max(ans, count);
    }

    cout << n - ans - 1 << "\n";
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