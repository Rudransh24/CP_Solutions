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

void solve(){
    
    int n;
    cin >> n;
    
    int ar[n];
    for(int i = 0; i < n; i++)
    cin >> ar[i];
    
    sort(ar, ar + n);
    int max_1[n][n];
    int min_1[n][n];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int maxx = 0;
            for(int k = i; k <= j; k++)
            {
                maxx = max(maxx, ar[k]);
            }
            for(int k = j; k <= i; k++)
            {
                maxx = max(maxx, ar[k]);
            }
            max_1[i][j] = maxx;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int minn = 1000000000000000;
            for(int k = i; k <= j; k++)
            {
                minn = min(minn, ar[k]);
            }
            for(int k = j; k <= i; k++)
            {
                minn = min(minn, ar[k]);
            }
            min_1[i][j] = minn;
        }
    }
    
    int dp[n][n] = {0};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        dp[i][j] = 0;
    }
    
    
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j + i < n; j++)
        {
            int f = 0;
            int maxx = max(max_1[j + 1][j + i], ar[j]);
            int maxx1 = max(max_1[j][j + i - 1], ar[i + j]);
            
            int minn = min(min_1[j + 1][j + i], ar[j]);
            int minn1 = min(min_1[j][j + i - 1], ar[i + j]);
            
            int ans = maxx - minn + dp[j + 1][j + i];
            int ans1 = maxx1 - minn1 + dp[j][j + i - 1];
            
            if(ans > ans1)
            f = 1;
            
            if(f)
            {
                max_1[j][j + i] = maxx1;
                min_1[j][j + i] = minn1;
                dp[j][j + i] = ans1;
            }
            else
            {
                max_1[j][j + i] = maxx;
                min_1[j][j + i] = minn;
                dp[j][j + i] = ans;
            }
        }
    }
    
    /*for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        cout << dp[i][j] << " ";
        cout <<"\n";
    }*/
    
    
    cout << dp[0][n - 1] << "\n";
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