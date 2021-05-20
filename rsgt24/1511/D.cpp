//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 1e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
   int n, k;
   cin >> n >> k;
   
   if(k == 1)
   {
       for(int i = 0; i < n; i++)
       cout << 'a';
       cout << "\n";
       
       return;
   }
   if(k >= n)
   {
       string ans = "";
       int count = 0;
       for(char i = 'a'; i <= 'z'; i++)
       {
           ans += i;
           count++;
           if(count == n)
           break;
       }
       cout << ans << "\n";
   }
   else
   {
       char ar[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o', 'p','q','r','s','t','u','v','w','x','y','z'};
       for(int i = 0; i < k; i++)
       {
           cout << ar[i]; 
           n--;
           for(int j = i + 1; j < k; j++)
           {
               if(n > 2)
               {
                   cout << ar[i] << ar[j];
                   n -= 2;
               }
               else if(n == 1)
               {
                   cout << ar[i];
                   n--;
               }
               else
               break;
           }
           
           if(n == 0)
           break;
       }
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