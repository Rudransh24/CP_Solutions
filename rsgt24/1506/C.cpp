//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

//GEEKSFORGEEKS
int LCSubStr(string X, string Y, int m, int n)
{

	int LCSuff[m + 1][n + 1];
	int result = 0; 
	for (int i = 0; i <= m; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0)
				LCSuff[i][j] = 0;

			else if (X[i - 1] == Y[j - 1]) {
				LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
				result = max(result, LCSuff[i][j]);
			}
			else
				LCSuff[i][j] = 0;
		}
	}
	return result;
}


void solve(){
    
    //solving C and D.
    //C.
    string a, b;
    cin >> a >> b;
    
    int n = a.size();
    int m = b.size();
    
    int x = LCSubStr(a, b, n, m);
    int ansa = n - x;
    int ansb = m - x;
    cout << ansa + ansb << "\n";
    
    //D.
    /*int n;
    cin >> n;
    
    int ar[n];
    map<int, int> mp;
    
    int max_1 = INT_MIN;
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
        
        max_1 = max(max_1, mp[ar[i]]);
    }
    
    //greedy
    int ans = 2 * max_1 - n;
    
    if(ans > 0)
    {
        cout << ans << "\n";
    }
    else
    {
        if(n & 1)
        ans = 1;
        else
        ans = 0;
        
        cout << ans << "\n";
        
    }*/
    
    
}

int32_t main() {
	
	selena
	int tc;
	cin >> tc;
	while(tc--){
	    solve();
	}
	return 0;
}