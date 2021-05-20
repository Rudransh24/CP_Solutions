//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

//GFG
bool isSpiltPossible(int n, int a[]) 
{ 
    int sum = 0, c1 = 0; 
  
    // Calculate sum of elements 
    // and count of 1's 
    for (int i = 0; i < n; i++) { 
        sum += a[i]; 
  
        if (a[i] == 1) { 
            c1++; 
        } 
    } 
  
    // If total sum is odd, return False 
    if (sum % 2) 
        return false; 
  
    // If sum of each part is even, 
    // return True 
    if ((sum / 2) % 2 == 0) 
        return true; 
  
    // If sum of each part is even but 
    // there is atleast one 1 
    if (c1 > 0) 
        return true; 
    else
        return false; 
} 

void solve(){
    
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++)
    cin >> ar[i];
    
    if (isSpiltPossible(n, ar)) 
        cout << "YES" << "\n"; 
    else
        cout << "NO" << "\n"; 
   
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