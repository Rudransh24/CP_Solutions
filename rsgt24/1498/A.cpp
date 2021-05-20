//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

int getSum(string str)
{
    int sum = 0;
 
    // Traversing through the string
    for (int i = 0; i < str.length(); i++) {
        // Since ascii value of
        // numbers starts from 48
        // so we subtract it from sum
        sum = sum + str[i] - 48;
    }
    return sum;
}

void solve(){
    
    int n;
    cin >> n;
    string x = to_string(n);
    int sum = getSum(x);
    
    if(__gcd(sum, n) == 1)
    {
        for(int i = 1; ; i++)
        {
            n += i;
            string x = to_string(n);
            int sum = getSum(x);
            if(__gcd(sum, n) > 1)
            {
                cout << n << "\n";
                break;
            }
            n -= i;
        }
    }
    else
    cout << n << "\n";
    
    
}

int32_t main() {
	
	selena
	int tc;
	cin >> tc;
	while(tc--){
	    solve();
	}
	return 0;
}