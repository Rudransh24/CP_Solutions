//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    string s;
    cin >> s;
    
    string a = s + 'a';
    string b = 'a' + s;
    
    if(a != string(a.rbegin(), a.rend()))
    {
        cout << "YES" << "\n";
        cout << a << "\n";
    }
    else
    {
        if(b != string(b.rbegin(), b.rend()))
        {
            cout << "YES" << "\n";
            cout << b << "\n";
        }
        else
        cout << "NO" << "\n";
    }
    
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