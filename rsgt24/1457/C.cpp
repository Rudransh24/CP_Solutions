//Show them your progress.....

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n, m, x, y, p, k;
    cin >> n >> p >> k;
    
    string s;
    cin >> s >> x >> y;
    
    string check = s;
    
    unordered_map<int, int> mp;
    
    int temp = p;
    temp--;
    
    for(int i = 0; i < 100000; i++)
    {
        mp[temp]++;
        temp += k;
    }
    
    //asnwer for all jumps to add a platform instead of any removal
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '0' && mp.find(i) != mp.end())
        {
            //cout << i << "\n";
            ans += x;
        }
    }
    
    //now comes time for removal of a platform..... with addition as well
    int del = 0;
    
    while(1)
    {
        if(s.size() == 0 || s[p - 1] == '1')
        break;
        else
        {
            s.erase(s.begin());
            del++;
        }
    }
    
    int ans2 = (del) * y;
    int ans3 = 0;
    //cout << s << "\n";
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0' && mp.find(i) != mp.end())
        {
            ans2 += x;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        if((i + 1) % p == 0)
        {
            if(check[i] == '1')
            break;
            else
            del = i + 1;
        }
    }
    
    //cout << del << "\n";
    check.erase(check.begin(), check.begin() + del);
    ans3 = del * y;
    
    //cout << check << "\n";
    
    for(int i = 0; i < check.size(); i++)
    {
        if(check[i] == '0' && mp.find(i) != mp.end())
        {
            ans3 += x;
        }
    }
    
    cout << min({ans, ans2, ans3}) << "\n";
    
    
    
    
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