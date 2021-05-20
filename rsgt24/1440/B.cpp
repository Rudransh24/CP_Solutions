#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    /*int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    string x;
    cin >> x;
    
    int ans = 0;
    
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == '0')
        {
            ans += min(b, c + d);
        }
        else
        {
            ans += min(c, b + d);
        }
    }
    
    cout << ans << "\n";*/
    
    int n, k;
    cin >> n >> k;
    
    int xx = n*k;
    
    int ar[xx];
    
    for(int i = 0; i < xx; i++)
    cin >> ar[i];
    
    sort(ar, ar + xx, greater<int>());
    
    int ans = 0;
    int ans1 = 0;
    int z = (n/2 + 1);
    int count = 0;
    
    for(int i = 0; i < xx;)
    {
        if(count < k)
        {
            ans += ar[i + n/2];
            count++;
        }
        //cout << ar[i + n/2] << " ";
        i += z;
        
    }
    
    cout << max(ans, ans1) << "\n";
}

int32_t main() {
	
	selena
	//int jj = 1;
	int tc = 1;
	cin >> tc;
	while(tc--){
	    //cout << "Case #" << jj << ": ";
	    solve();
	    //jj++;
	}
	return 0;
}