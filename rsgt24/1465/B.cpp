//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

//SOURCE GEEKSFORGEEKS
bool checkDivisibility(int n, int digit) 
{ 
    if(digit == 0)
    return true;
    
    if(digit != 0 && n % digit == 0)
    return true;
    else
    return false; 
} 
  
bool check(int n) 
{ 
    int temp = n; 
    while (temp > 0) { 
        int digit = temp % 10; 
        if (!(checkDivisibility(n, digit))) 
            return false; 
  
        temp /= 10; 
    } 
    return true; 
} 


void solve(){

    int n;
    cin >> n;
    
    for(int i = n; i <= 1000000000000000000; i++)
    {
        if(check(i))
        {
            cout << i << "\n";
            break;
        }
    }
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