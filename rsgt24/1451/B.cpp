//Show them your progress.....

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

int count1(string a, string b) 
{ 
    int m = a.length(); 
    int n = b.length(); 
    int lookup[m + 1][n + 1] = { { 0 } }; 
    for (int i = 0; i <= n; ++i) 
        lookup[0][i] = 0; 
    for (int i = 0; i <= m; ++i) 
        lookup[i][0] = 1; 
    for (int i = 1; i <= m; i++) 
    { 
        for (int j = 1; j <= n; j++) 
        { 
            if (a[i - 1] == b[j - 1]) 
                lookup[i][j] = lookup[i - 1][j - 1] +  
                               lookup[i - 1][j]; 
                  
            else
                lookup[i][j] = lookup[i - 1][j]; 
        } 
    } 
  
    return lookup[m][n]; 
} 

void solve(){
    
    int n, k;
    cin >> n >> k;
    
    string x;
    cin >> x;
    
    
    
    while(k--)
    {
        int l, r;
        cin >> l >> r;
        
        if(r - l + 1 < 2 || r - l + 1 == n)
        cout << "NO" << "\n";
        else
        {
            l--;
            r--;
            char xx = x[l];
            char yy = x[r];
            
            map<char, int> mp, mp1;
    
            for(int i = 0; i < l; i++)
            {
                //if(x[i] == xx)
                mp[x[i]]++;
            }
            
            for(int i = r + 1; i < x.size(); i++)
            {
                //if(x[i] == yy)
                mp1[x[i]]++;
            }
            
            if(mp[xx] >= 1 || mp1[yy] >= 1)
            cout << "YES" << "\n";
            else
            cout << "NO" << "\n";
            
            
        }
        
    }
    
    
}

int32_t main() {
	
	selena
	//int jj = 1;
	int tc = 1;
	cin >> tc;
	while(tc--){
	    //cout << "Case #" << jj << ": ";
	    solve();
	    //jj++;
	}
	return 0;
}