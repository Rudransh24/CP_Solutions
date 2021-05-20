//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

int getSum(string str)
{
    int sum = 0;
 
    // Traversing through the string
    for (int i = 0; i < str.length(); i++) {
        // Since ascii value of
        // numbers starts from 48
        // so we subtract it from sum
        sum = sum + str[i] - 48;
    }
    return sum;
}

void solve(){
    
    int n, w;
    cin >> n >> w;
    map<int, int> mp;
    
    int ar[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    
    int count = 0;
    
    for(int j = 1; j <= n; j++)
    {
        int sum = 0;
        for(auto i = mp.rbegin(); i != mp.rend(); i++)
        {
            int x = i->first;
            int y = i->second;
            
            if(y == 0)
            continue;
            
            while(1)
            {
                sum += x;
            
                if(sum > w)
                {
                    sum -= x;
                    break;
                }
            
                mp[x]--;
                
                if(mp[x] == 0)
                break;
            }
        }
        
        int f = 0;
        for(auto i: mp)
        if(i.second != 0)
        f = 1;
        
        if(f == 0)
        {
            count = j;
            break;
        }
    }
    
    cout << count << "\n";
    
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