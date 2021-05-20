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
    
    int pref[n];
    
    int c0 = 0;
    int c1 = 0;
    
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '0')
        c0++;
        else c1++;
        
        //means count of 1 and 0 equal so ---> 1
        if(c0 == c1)
        {
            pref[i] = 1;
        }
        else
        pref[i] = 0;
    }
    
    int count = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        if(count & 1)
        {
            if(a[i] == '0')
            a[i] = '1';
            else
            a[i] = '0';
        }
        
        if(a[i] != b[i] && pref[i] == 1)
        {
            count++;
        }
        else if(a[i] != b[i] && pref[i] == 0)
        {
            cout << "NO" << "\n";
            return;
        }
    }
    
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