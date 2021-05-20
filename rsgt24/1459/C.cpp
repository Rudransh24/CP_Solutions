//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

//oeis
//https://oeis.org/search?q=4%2C4%2C12%2C9%2C24&sort=&language=english&go=Search

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}

void solve(){

    int n, m;
    cin >> n >> m;
    
    int a[n], b[m];
    
    for(int i = 0; i < n; i++)
    cin >> a[i];
    
    for(int j = 0; j < m; j++)
    cin >> b[j];
    
    if(n != 1)
    {
        sort(a, a + n);
        int x = a[0];
        for(int i = 1; i < n; i++)
        {
            a[i] = a[i] - x;
        }
        
        int ans = a[1];
        for(int i = 2; i < n; i++)
        {
            ans = __gcd(ans, a[i]);
        }
        
        for(int j = 0; j < m; j++)
        {
            cout << __gcd(ans, x + b[j]) << " ";
        }
    }
    else
    {
        for(int j = 0; j < m; j++)
        {
            cout << a[0] + b[j] << " ";
        }
    }
    
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