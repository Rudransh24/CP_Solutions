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
    string s;
    cin >> s;
    
    int check = 0;
    for(int i = 0; i < s.size(); i++)
    {
        for(int j = i; j < n; j++)
        {
            string temp = s;
            temp.erase(temp.begin() + i, temp.begin() + j + 1);
            //cout << temp << "\n";
            if(temp == "2020")
            check = 1;
        }
    }
    
    if(check || s == "2020")
    cout << "YES" << "\n";
    else
    cout << "NO" << "\n";
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