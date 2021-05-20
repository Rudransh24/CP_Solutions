//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 1e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
   int n, q;
   cin >> n >> q;
   
   int ar[n];
   int t[q];
   
   vector<int> v;
   
   for(int i = 0; i < n; i++)
   {
       cin >> ar[i];
   }
   
 
   for(int i = 1; i <= 50; i++)
   {
       int f = 0;
       for(int j = 0; j < n; j++)
       {
           if(ar[j] == i)
           {
               v.pb(j + 1);
               f = 1;
               break;
           }
       }
       if(f == 0)
       v.pb(0);
   }
   //for(int i = 0; i < v.size(); i++)
   //cout << v[i] << " ";
   //cout << "\n";
   
   for(int i = 0; i < q; i++)
   {
       int x;
       cin >> x;
       cout << v[x - 1] << " ";
       for(int i = 0; i < v.size(); i++)
       {
           if(v[i] < v[x - 1])
           v[i]++;
       }
       v[x - 1] = 1;
   }
   
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