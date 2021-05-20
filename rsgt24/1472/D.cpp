//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);


void solve()
{
    int n;
    cin >> n;
    
    int ar[n];
    
    for(int i = 0; i < n; i++)
    cin >> ar[i];
    
    
    int a = 0, b = 0;
    sort(ar, ar + n, greater<int>());
    
    for(int i = 0; i < n; i++)
    {
        if(i & 1)
        {
            if(ar[i] & 1)
            b += ar[i];
        }
        else
        {
            if(!(ar[i] & 1))
            a += ar[i];
        }
    }
    
    if(a > b)
    cout << "Alice" << "\n";
    else if(a == b)
    cout << "Tie" << "\n";
    else
    cout << "Bob" << "\n";
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