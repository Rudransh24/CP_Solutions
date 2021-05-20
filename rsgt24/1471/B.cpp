//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

//this didnt work will check later..
int intlog(int base, int x) {
    return (int)(log(x) / log(base));
}

void solve(){
    
    int n, x;
    cin >> n >> x;
    
    int ar[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    
    int max_1[n];
    
    for(int i = 0; i < n; i++)
    {
        //including the number itself finding how many times it can occur.
        int count = 1;
        int pow_1 = ar[i];
        while(1)
        {
            if(pow_1 <= 0)
            break;
            
            if(pow_1 % x == 0)
            {
                count++;
                pow_1 /= x;
            }
            else
            break;
        }
        
        max_1[i] = count;
    }
    
    /*for(int i = 0; i < n; i++)
    cout << max_1[i] << " ";
    cout << "\n";*/
    
    int ans = 0;
    int min_1 = *min_element(max_1, max_1 + n);
    int f = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(max_1[i] == min_1)
        f = 1;
        
        if(f == 1)
        ans += min(min_1, max_1[i]) * ar[i];
        else
        ans += min((min_1 + 1), max_1[i]) * ar[i];
    }
    
    cout << ans << "\n";
    
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