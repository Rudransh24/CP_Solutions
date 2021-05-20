//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){

    int n;cin >> n;
    int ar[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    
    if(n != 1)
    {
        if(n % 2 == 1)
    for(int i = 0, j = n - 1; i <= n / 2; i++, j--)
    {
        if(i != n / 2)
        cout << ar[i] << " " << ar[j] << " ";
        else
        cout << ar[i] << " ";
    }
    else
    {
        for(int i = 0, j = n - 1; i < j; i++, j--)
    {
        cout << ar[i] << " " << ar[j] << " ";
    }
    }
    }
    else
    {
        cout << ar[0] << " ";
    }
    cout << "\n";
    
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