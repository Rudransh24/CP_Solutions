//Show them your PROGRESS
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma")

void solve(){
    
    /*int n, k1, k2, w, b;
    cin >> n >> k1 >> k2 >> w >> b;
    
    if(((k1 + k2) >= 2 * w) && ((2 * n - k1 - k2) >= 2 * b))
    cout << "YES" << "\n";
    else
    cout << "NO" << "\n";*/
    
    
    string s;
    cin >> s;
    
    int ind1 = -1, ind2 = -1;
    for(int i = 0; i < s.size() - 1; i++)
    {
        if(s[i] == '1' && s[i + 1] == '1')
        {
            ind1 = i;
            ind2 = i + 1;
            break;
        }
    }
    if(ind1 == -1 && ind2 == -1)
    {
        cout << "YES" << "\n";
        return;
    }
    int ans = 0;
    for(int i = ind2 + 1; i < s.size() - 1; i++)
    {
        if(s[i] == '0' && s[i + 1] == '0')
        {
            ans = 1;
            break;
        }
    }
    
    if(ans)
    cout << "NO" << "\n";
    else
    cout << "YES" << "\n";
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