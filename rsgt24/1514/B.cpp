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

int checkperfectsquare(int n)
{
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        return 1;
    }
    else {
        return 0;
    }
}

void solve(){
    
    /*int n;
    cin >> n;
    
    int ar[n];
    for(int i = 0; i < n; i++)
    cin >> ar[i];
    
    int f = 0;
    for(int i = 0; i < n; i++)
    {
        if(!checkperfectsquare(ar[i]))
        f = 1;
    }
    
    if(f)
    cout << "YES" << "\n";
    else
    cout << "NO" << "\n";
    */
    
    int n, k;
    cin >> n >> k;
    int x = 1;
    
    for(int i = 1; i <= k; i++)
    {
        x = (x % M * n % M) % M;
    }    
    cout << x % M << "\n";
    
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