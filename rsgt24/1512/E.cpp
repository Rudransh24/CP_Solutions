//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
   int n, l, r, s;
   cin >> n >> l >> r >> s;
   
   vector<int> v;
   for(int i = 1; i <= n; i++)
   v.pb(i);
   
   for(int i = 0; i <= n; i++)
   {
       rotate(v.begin(),v.begin()+1,v.end());
       int sum = 0;
       for(int j = l - 1; j < r; j++)
       sum += v[j];
       
       if(sum == s)
       {
           for(int j = 0; j < n; j++)
           cout << v[j] << " ";
           
           cout << "\n";
           return;
       }
   }
   
   cout << -1 << "\n";
    
}

int32_t main() {
	
	selena
	int kk = 1;
	int tc = 1;
	cin >> tc;
	while(tc--){
	    //cout << "Case #" << kk << ": ";
	    solve();
	    kk++;
	}
	return 0;
}