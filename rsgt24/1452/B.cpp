#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n;
    cin >> n;
    
    int ar[n];
    int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    
    int k = n - 1;
    int to_be_subtracted =  sum % k;
    int max_1 = (*max_element(ar, ar + n)) * k;
    
    if(max_1 < sum)
    {
        if(sum % (k) == 0)
        cout << 0 << "\n";
        else
        {
            cout << n - 1 - to_be_subtracted << "\n";
        }
    }
    else
    {
        cout << max_1 - sum << "\n";   
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