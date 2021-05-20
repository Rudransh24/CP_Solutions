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
    int j = 0;
    for(int i = n; i >=1; i--)
    {
        ar[j] = i;
        j++;
    }
    
    if(n % 2 == 0)
    {
        for(int i = 0; i < n; i++)
        cout << ar[i] << " ";
        cout << "\n";
    }
    else
    {
        swap(ar[n/2], ar[n/2 + 1]);  
        for(int i = 0; i < n; i++)
        cout << ar[i] << " ";
        cout << "\n";
    }
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