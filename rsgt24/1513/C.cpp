//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 1e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

int ar[MAX];

void pre()
{
    for(int i = 0; i <= 9; i++)
    ar[i] = 1;
    
    for(int i = 10; i < MAX; i++)
    {
        ar[i] = (ar[i - 9] + ar[i - 10]) % M;
    }
}

int largestPower(int n, int p)
{
    int x = 0;
    while (n) {
        n /= p;
        x += n;
    }
    return x;
}
 
int power(int x, int y, int p)
{
    int res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
 
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
 
// Returns n! % p
int modFact(int n, int p)
{
    if (n >= p)
        return 0;
 
    int res = 1;

    bool isPrime[n + 1];
    memset(isPrime, 1, sizeof(isPrime));
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = 2 * i; j <= n; j += i)
                isPrime[j] = 0;
        }
    }
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            int k = largestPower(n, i);
            res = (res * power(i, k, p)) % p;
        }
    }
    return res;
}

void solve(){

    int n, m;
    cin >> n >> m;
    string x = to_string(n);
    int ans = 0;
    for(int i = 0; i < x.size(); i++)
    {
        ans += ar[(x[i] - '0') + m] % M;
        //cout << x[i] - '0' + m << " ";
    }
    //cout<<"\n";
    cout << ans % M << "\n";
    
    
    //B 
    /*int n;
    cin >> n;
    int ar[n];
    
    int min_1 = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        min_1 = min(min_1, ar[i]);
    }
    
    bool f = 0;
    if(ar[0] == ar[n - 1] && ar[0] == min_1)
    {
        f = 0;
    }
    else
    f = 1;
    
    
    if(f)
    cout << 0 << "\n";
    else
    {
        int cnt = 0;
        for(int i = 0; i < n; i++)
        if(ar[i] == min_1)
        cnt++;
        
        int ans = ((cnt * (cnt - 1))) % M;
        int x = modFact(n - 2, M);
        
        int fans = (x * ans) % M;
        
        cout << fans << "\n";
    }*/
   
   
}

int32_t main() {
	
	selena
	pre();
	int tc = 1;
	cin >> tc;
	while(tc--){
	    solve();
	}
	return 0;
}