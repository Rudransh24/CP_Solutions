//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

//log of "x", base "base"
int intlog(int base, int x) {
    return (int)(log(x) / log(base));
}

void solve(){
    
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    
    int a[n1], b[n2], c[n3];
    int sum = 0;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    
    for(int i = 0; i < n1; i++)
    {
        cin >> a[i];
        sum1 += a[i];
    }
    
    for(int i = 0; i < n2; i++)
    {
        cin >> b[i];
        sum2 += b[i];
    }
    
    for(int i = 0; i < n3; i++)
    {
        cin >> c[i];
        sum3 += c[i];
    }
    
    sum = sum1 + sum2 + sum3;
    //cout << sum << "\n";
    
    sort(a, a + n1);
    sort(b, b + n2);
    sort(c, c + n3);
    
    
    int min_1 = min({a[0] + b[0], b[0] + c[0], c[0] + a[0]});
    int min_2 = min({sum1, sum2, sum3});
    
    cout << max((sum - 2 * min_1), (sum - 2 * min_2)) << "\n";
}

int32_t main() {
	
	selena
	int tc = 1;
	//cin >> tc;
	while(tc--){
	    solve();
	}
	return 0;
}