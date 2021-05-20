//Show them your progress.....

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

bool isPerfectSquare(long double x) 
{   
  // Find floating point value of  
  // square root of x. 
  long double sr = sqrt(x); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
} 

void solve(){
    
    int n, k;
    cin >> n >> k;
    
    //wrong direct approach figure something out quickly should go for brute?!?!?!
    /*if(n % 2 == 0 && k % 2 == 0)
    {
        cout << "Utkarsh" << "\n";
    }
    else if(n % 2 == 1 && k % 2 == 1)
    {
        cout << "Ashish" << "\n";
    }
    else if(n % 2 == 1 && k % 2 == 0)
    {
        long double temp = n;
        if(isPerfectSquare(temp))
        cout << "Utkarsh" << "\n";
        else
        cout << "Ashish" << "\n";
    }
    else
    {
        long double temp = n;
        if(!(isPerfectSquare(temp)))
        cout << "Utkarsh" << "\n";
        else
        cout << "Ashish" << "\n";
    }
    */
    
    int temp = 0, temp1 = 0;
    
    int f = 0;
    
    /*while(1)
    {
        if(f == 0)
        {
            temp += k;
            f = 1;
            if(temp*temp + temp1*temp1 > n*n)
            break;
        }
        else
        {
            temp1 += k;
            f = 0;
            if(temp*temp + temp1*temp1 > n*n)
            break;
        }
        
    }*/ 
    
    //can it be done in O(1)?!?!?!?!
    
    //i knew it some was related to square root...
    //can be done using simple recursion for less constraints
    //suppose constraints were greater than 10^8??now what?
    
    int ans = sqrt((n * n) / 2) / k;
    ans *= k;
    
    if(ans * ans + (ans + k) * (ans + k) > n * n)
    cout << "Utkarsh" << "\n";
    else
    cout << "Ashish" << "\n";
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