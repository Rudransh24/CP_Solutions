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

//GEEKSFORGEEKS

bool findPairs(int arr[], int n) 
{ 
    unordered_map<int, pair<int, int>> Hash; 
    for (int i = 0; i < n; ++i) 
    { 
        for (int j = i + 1; j < n; ++j) 
        { 
            int sum = arr[i] + arr[j]; 
            if (Hash.find(sum) == Hash.end()) 
                Hash[sum] = make_pair(i, j); 
  
            else
            { 
                pair<int, int> pp = Hash[sum];
                unordered_map<int, int> mp;
                mp[pp.first] = 1;
                mp[pp.second] = 1;
                mp[i] = 1;
                mp[j] = 1;
                int ans = mp.size();
                if(ans == 4)
                {
                    cout << "YES" << "\n";
                    cout << pp.first + 1 << " " << pp.second + 1 << " " << i + 1 << " " << j + 1 << "\n";
                    return true;
                }
            } 
        } 
    } 
 
    return false; 
} 

void solve(){
    
    int n;
    cin >> n;
    
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    
    if(!findPairs(ar, n))
    cout << "NO" << "\n";
    
    
}

int32_t main() {
	
	selena
	int tc = 1;
	//cin >> tc;
	while(tc--){
	    solve();
	}
	return 0;
}