//Show them your progress....

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

//Time complexity: O(Log(min(a, b)))
//study of algos.....
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}

void solve(){

    int n;
    cin >> n;
    int r[n];
    for(int i = 0; i < n; i++)
    cin >> r[i];
    
    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++)
    cin >> b[i];
    
    int pr[n];
    pr[0] = r[0];
    for(int i = 1; i < n; i++)
    {
        pr[i] = r[i] + pr[i - 1];
    }
    
    int pb[m];
    pb[0] = b[0];
    for(int i = 1; i < m; i++)
    {
        pb[i] = b[i] + pb[i - 1];
    }
    
    int max_1 = 0;
    int max_2 = 0;
    for(int i = 0; i < n; i++)
    {
        max_1 = max(pr[i], max_1);
    }
    
    for(int i = 0; i < m; i++)
    {
        max_2 = max(pb[i], max_2);
    }
    
    cout << max_1 + max_2 << "\n";
    
    
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