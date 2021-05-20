//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    int ar[n + 1];
    vector<int> v;
    for(int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    int max_1 = INT_MIN;
    //TLE
    /*
    for(int i = 1; i <= n; i++)
    {
        int ans = 0;
        int x = i;
        while(x <= n)
        {
            ans += mp[x];
            x += mp[x];
        }
        
        max_1 = max(max_1, ans);
    }

    cout << max_1 << "\n";*/
    bool visited[n + 1] = {false};
    
    for(int i = n; i >= 1; i--)
    {
        int ans = 0;
        int j = i;
        int f = 0;
        while(1)
        {
            
            if(j > n)
            break;
            
            if(visited[j] == true)
            {
                f = 1;
                break;
            }
            
            ans += ar[j];
            visited[j] = true;
            
            j += ar[j];
        }
        
        if(f)
        ans += mp[j];
        
        mp[i] = ans;
        max_1 = max(max_1, ans);
        
        
    }
    cout << max_1 << "\n";
    
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