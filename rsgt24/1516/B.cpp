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
    vector<int> ans;
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        ans.pb(ar[i]);
        s.insert(ar[i]);
    }
    
    if(s.size() == 1)
    {
        cout << "YES" << "\n";
        return;
    }
    
    if(n == 2)
    {
        if(ar[0] != ar[1])
        {
            cout << "NO" << "\n";
            return;
        }
    }
    
    int xor_val = 0;
    for(int i = 0; i < n; i++)
    {
        xor_val ^= ar[i];
        int xor_val1 = 0;
        int f = 0;
        int ind = -1;
        for(int j = i + 1; j < n; j++)
        {
            xor_val1 ^= ar[j];
            if(xor_val == xor_val1)
            {
                f = 1;
                ind = j;
                if(ind == n - 1)
                {
                    cout << "YES" << "\n";
                    return;
                }
                xor_val1 = 0;
            }
        }
        
        
    }
    
    xor_val = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        xor_val ^= ar[i];
        int xor_val1 = 0;
        int f = 0;
        int ind = -1;
        for(int j = i - 1; j >= 0; j--)
        {
            xor_val1 ^= ar[j];
            if(xor_val == xor_val1)
            {
                f = 1;
                ind = j;
                if(ind == 0)
                {
                    cout << "YES" << "\n";
                    return;
                }
                xor_val1 = 0;
            }
        }

    }
    
    cout << "NO" << "\n";
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