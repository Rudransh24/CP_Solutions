//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n, m;
    cin >> n >> m;
    
    char ar[n + 1][m + 1];
    
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        cin >> ar[i][j];
    }
    
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(ar[i][j] == '*')
            {
                for(int k = 1; k <= 500; k++)
                {
                    int f = 0;
                    for(int xx = j - k + 1; xx <= j + k - 1; xx++)
                    {
                        if(ar[i + k - 1][xx] == '*' && (i + k - 1) <= n && xx <= m)
                        {
                            continue;
                        }
                        else
                        {
                            f = 1;
                            break;
                        }
                    }
                    if(f == 0)
                    count++;
                    
                }
            }
        }
    }
    
    cout << count << "\n";
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