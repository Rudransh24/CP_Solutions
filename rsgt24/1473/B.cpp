//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    string s, t;
    cin >> s >> t;
    
    int x = s.size();
    int y = t.size();
    
    int ans = (x * y) / __gcd(x, y);
    //cout << ans << "\n";
    
    int f = 0;
    if(x >= y)
    {
        string ans1 = "";
        int x1 = ans / x;
        for(int i = 0; i < x1; i++)
        {
            ans1 += s;
        }
        int j = 0;
        int ksi = ans1.size();
        for(int i = 0; i < ans1.size(); i++)
        {
            
            if(t[j] != ans1[i])
            {
                f = 1;
            }
            j++;
            if(j == t.size())
            j = 0;
        }
        
        //cout << ans1 << "\n";
        if(f)
        cout << -1 << "\n";
        else
        cout << ans1 << "\n";
    }
    else
    {
        string ans1 = "";
        int x1 = ans / y;
        for(int i = 0; i < x1; i++)
        {
            ans1 += t;
        }
        int j = 0;
        int ksi = ans1.size();
        for(int i = 0; i < ans1.size(); i++)
        {
            
            if(s[j] != ans1[i])
            {
                f = 1;
            }
            j++;
            if(j == s.size())
            j = 0;
        }
        
        //cout << ans1 << "\n";
        if(f)
        cout << -1 << "\n";
        else
        cout << ans1 << "\n";
    }
}

int32_t main() {
	
	selena
	int tc = 1;
	cin >> tc;
	cin.ignore();
	while(tc--){
	    solve();
	}
	return 0;
}