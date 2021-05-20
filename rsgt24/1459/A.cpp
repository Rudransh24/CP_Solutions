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
    
    string a, b;
    cin >> a >> b;
    
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > b[i])
        cnt1++;
        else if(a[i] < b[i])
        cnt2++;
    }
    
    if(cnt1 == cnt2)
    cout << "EQUAL" << "\n";
    else if(cnt1 < cnt2)
    cout << "BLUE" << "\n";
    else
    cout << "RED" << "\n";
    
    
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