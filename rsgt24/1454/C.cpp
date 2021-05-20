//Show them your progress.....

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
   
    int n;
    cin >> n;
    int ar[n];
    
    map<int, vector<int>> mp;
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]].pb(i + 1);
    }
    
    int min_1 = INT_MAX;
    
    for(auto i: mp)
    {
        int count = 0;
        vector<int> ans = i.second;
        sort(ans.begin(), ans.end());
        //for(int i = 0; i < ans.size(); i++)
        //cout << ans[i] << " ";
        //cout << "\n";
        
        for(int i = 0; i < ans.size(); i++)
        {
            if(i == 0)
            {
                if(ans[i] != 1)
                count++;
            }
            
            if(i == ans.size() - 1)
            {
                if(ans[i] != n)
                count++;
            }
            
            if((ans[i] - ans[i - 1]) != 1 && i != 0)
            count++;
        }
        
        min_1 = min(min_1, count);
    }
    
    cout << min_1 << "\n";
}

int32_t main() {
	
	selena
	//int jj = 1;
	int tc = 1;
	cin >> tc;
	while(tc--){
	    //out << "Case #" << jj << ": ";
	    solve();
	    //jj++;
	}
	return 0;
}