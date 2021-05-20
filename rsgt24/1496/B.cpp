//Show them your PROGRESS
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    /*string s;
    int n, k;
    
    cin >> n >> k;
    cin >> s;
    
    if(k == 0)
    {
        cout << "YES" << "\n";
        return;
    }
    
    int f = 0;
    int length = n;
    int jj = 0;
    for(int i = 0, j = n - 1; i < j;)
    {
        if(s[i++] != s[j--])
        {
            jj = 1;
            break;
        }
        
        if(i == k)
        {
            f = i;
            length = j - i + 1;
            break;
        }
        
    }
    
    if(jj)
    cout << "NO" << "\n";
    else
    {
        if(f >= k && length > 0)
        cout << "YES" << "\n";
        else
        cout << "NO" << "\n";
    }*/
    

    int n, k;
    cin >> n >> k;
    
    int ar[n];
    map<int, int> mp;
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    
    sort(ar, ar + n);
    
    int ans = mp.size();
    
    if(k == 0)
    cout << ans << "\n";
    else
    {
        int x = *max_element(ar, ar + n);
        int mex = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(ar[i] == mex)
            mex++;
        }
        
        if(mex == x + 1)
        {
            cout << n + k << "\n";
            return;
        }
        
        int y = ceil((double)(mex + x) / 2);
        
        if(mp[y] != 0)
        cout << ans << "\n";
        else
        cout << ans + 1 << "\n";
    }
    
    
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