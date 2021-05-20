//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 1e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n;
    cin >> n;
    int ar[n];
    
    int min_1 = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        min_1 = min(min_1, ar[i]);
    }
    
    bool f = 0;
    
    for(int i = 0; i < n; i++)
    {
        int x = (min_1 & ar[i]);
        
        if(x != min_1)
        f = 1;
    }
    
    if(f)
    cout << 0 << "\n";
    else
    {
        int cnt = 0;
        for(int i = 0; i < n; i++)
        if(ar[i] == min_1)
        cnt++;
        
        int fact = 1;
        int ans = ((cnt * (cnt - 1))) % M;
        
        for(int i = 1; i <= n - 2; i++)
        fact = (fact * i) % M;
        
        int fans = (fact % M * ans % M) % M;
        
        cout << (fans) % M << "\n";
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