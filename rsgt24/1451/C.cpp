//reduced time space?!?!?

//Show them your progress.....

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n, k;
    cin >> n >> k;
    
    string s, s1;
    cin >> s >> s1;
    
    //string temp = s, temp1 = s1;
    //sort(temp.begin(), temp.end());
    //sort(temp1.begin(), temp1.end());
    
    unordered_map<char, int> mp, mp1;
    
    for(char i = 'a'; i <= 'z'; i++)
    {
        mp[i] = 0;
        mp1[i] = 0;
        //cout << mp[i] << " " << mp1[i] << "\n";
    }
    
    for(int i = 0; i < s.size(); i++)
    mp[s[i]]++;
    
    for(int i = 0; i < s1.size(); i++)
    mp1[s1[i]]++;
    
    int f = 0;
    for(char i = 'a'; i <= 'z'; i++)
    {
        //cout << i << "\n";
        if(mp1[i] < mp[i])
        {
            if(i != 'z')
            {
                //cout << "deb" << "\n";
                int temp = mp[i] - mp1[i];
                
                if(temp % k == 0)
                {
                    mp[i + 1] += temp;
                    //mp[i] = mp1[i];
                }
                else
                {
                    f = 1;
                    break;
                }
            }
        }
        if(mp1[i] > mp[i])
        {
            f = 1;
            break;
        }
    }
    
    if(f == 0)
    cout << "Yes" << "\n";
    else
    cout << "No" << "\n";
    
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