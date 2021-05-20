//Show them your progress.....

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void printDivisors(int n) 
{ 
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) 
                printf("%d ", i); 
  
            else
                printf("%d %d ", i, n/i); 
        } 
    } 
} 

void solve(){
    
    int n;
    cin >> n;
    if(n == 1)
    {
        cout << 0 << "\n";
        return;
    }
    
    if(n == 2)
    {
        cout << 1 << "\n";
        return;
    }
    
    if(n == 3)
    {
        cout << 2 << "\n";
        return;
    }
    
    if(n & 1)
    cout << 3 << "\n";
    else
    cout << 2 << "\n";
    
    
    
    
    
    
    //for(int i = 0; i < n; i++)
    //{
    //    cout << ar[i] << " ";
    //}
    
    
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