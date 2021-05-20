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
    
    string s;
    cin >> s;
    
    int m = 0, t = 0;
    //int m1 = 0, t1 = 0;
    
    for(int i = 0; i < n; i++)
    if(s[i] == 'M')
    m++;
    else
    t++;
    
    m *= 2;
    
    if(m != t)
    {
        cout << "NO" << "\n";
        return;
    }
    else if(s[0] == 'M' or s[n - 1] == 'M')
    {
        cout << "NO" << "\n";
        return;
    }
    
    map<char, int> mp;
    int f = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'M')
        {
            mp['M']++;
            mp['T'] -= 1;
            
            if(mp['T'] < 0)
            f = 1;
        }
        else
        mp['T']++;
    }
    
    int ans = n / 3;
    int x = mp['M'];
    
    if(x != ans)
    {
        cout << "NO" << "\n";
        return;
    }
    
    reverse(s.begin(), s.end());
    mp['M'] = 0;
    mp['T'] = 0;
    //cout<<s<<"\n";
    
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'M')
        {
            mp['M']++;
            mp['T'] -= 1;
            
            if(mp['T'] < 0)
            f = 1;
        }
        else
        mp['T']++;
    }

    if(f == 1)
    cout << "NO" << "\n";
    else
    {
        cout << "YES" << "\n";
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