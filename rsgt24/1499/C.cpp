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
    
    int c[n];
    
    for(int i = 0; i < n; i++)
    cin >> c[i];
    
    //using only first 2 as n segments.
    int ans = c[0] * n + c[1] * n;
    vector<int> ev, od;
    
    int ans1 = 0, ans2 = 0;
    int ind1 = c[0], ind2 = c[1];
    vector<int> fans;
    
    for(int i = 0; i < n; i++)
    {
        //used first two indices as n segments
        if(i == 0 || i == 1)
        continue;
        
        //using only odd and even indices separately
        if(i & 1)
        {
            if(c[i] >= ind2)
            {
                ans2 += c[i];
            }
            else
            {
                ans2 += ind2;
                ind2 = c[i];
            }
            od.pb(c[i]);
        }
        else
        {
            if(c[i] >= ind1)
            {
                ans1 += c[i];
            }
            else
            {
                ans1 += ind1;
                ind1 = c[i];
            }
            ev.pb(c[i]);
        }
        
        //calculating minimum at each step
        //ind1 -> horizontal
        //ind2 -> vertical
        int ans3 = (n - ev.size()) * ind1;
        int ans4 = (n - od.size()) * ind2;
        
        fans.pb(ans1 + ans2 + ans3 + ans4);
    }
    
    sort(fans.begin(), fans.end());
    
    if(fans.size() == 0)
    cout << ans << "\n";
    else
    cout << min(fans[0], ans) << "\n";
    
    
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