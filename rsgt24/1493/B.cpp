//Show them your PROGRESS
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int h, m;
    cin >> h >> m;
    
    string s;
    cin >> s;
    
    int x, y;
    string xx = "", yy = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(i < 2)
        xx += s[i];
        else if(i > 2)
        yy += s[i];
    }
    
    x = stoi(xx);
    y = stoi(yy);
    
    map<char, int> mp;
    map<char, char> mp1;
    mp['1'] = 1;
    mp['2'] = 1;
    mp['0'] = 1;
    mp['5'] = 1;
    mp['8'] = 1;
    mp[':'] = 1;
    
    mp1['1'] = '1';
    mp1['2'] = '5';
    mp1['0'] = '0';
    mp1['5'] = '2';
    mp1['8'] = '8';
    
    string ans = "";
    for(int i = x; i < h; i++)
    {
        if(i == x)
        {
            for(int j = y; j < m; j++)
            {
                string xx = to_string(i);
                string yy = to_string(j);
                if(xx.size() == 1)
                {
                    xx = '0' + xx;
                }
                if(yy.size() == 1)
                {
                    yy = '0' + yy;
                }
                
                string ss = xx + ':' + yy;
                int f = 0;
                for(int k = 0; k < ss.size(); k++)
                {
                    if(mp[ss[k]] != 1)
                    {
                        f = 1;
                        break;
                    }
                }
                
                if(f == 0)
                {
                    ans = ss;
                    string n1 = "";
                    reverse(ans.begin(), ans.end());
                    
                    for(int i = 0; i < ans.size(); i++)
                    {
                        if(i == 2)
                        n1 += ':';
                        else
                        n1 += mp1[ans[i]];
                    }
                    
                    int x, y;
                    string xx = "", yy = "";
                    for(int i = 0; i < n1.size(); i++)
                    {
                        if(i < 2)
                        xx += n1[i];
                        else if(i > 2)
                        yy += n1[i];
                    }
    
                    x = stoi(xx);
                    y = stoi(yy);
                    
                    if(x < h && y < m)
                    {
                        reverse(ans.begin(), ans.end());
                        cout << ans << "\n";
                        return;
                    }
                }
            }
        }
        else
        {
            for(int j = 0; j < m; j++)
            {
                string xx = to_string(i);
                string yy = to_string(j);
                if(xx.size() == 1)
                {
                    xx = '0' + xx;
                }
                if(yy.size() == 1)
                {
                    yy = '0' + yy;
                }
                
                string ss = xx + ':' + yy;
                int f = 0;
                for(int k = 0; k < ss.size(); k++)
                {
                    if(mp[ss[k]] != 1)
                    {
                        f = 1;
                        break;
                    }
                }
                
                if(f == 0)
                {
                    ans = ss;
                    string n1 = "";
                    reverse(ans.begin(), ans.end());
                    
                    for(int i = 0; i < ans.size(); i++)
                    {
                        if(i == 2)
                        n1 += ':';
                        else
                        n1 += mp1[ans[i]];
                    }
                    
                    int x, y;
                    string xx = "", yy = "";
                    for(int i = 0; i < n1.size(); i++)
                    {
                        if(i < 2)
                        xx += n1[i];
                        else if(i > 2)
                        yy += n1[i];
                    }
    
                    x = stoi(xx);
                    y = stoi(yy);
                    
                    if(x < h && y < m)
                    {
                        reverse(ans.begin(), ans.end());
                        cout << ans << "\n";
                        return;
                    }
                }
            }
        }
    }
    
    cout << "00:00" << "\n";
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