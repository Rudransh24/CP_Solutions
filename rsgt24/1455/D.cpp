//Show them your progress.....


//trying brute lets see if this works :)
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

//minimum element approach is wrong because it can happen that swapping with a smaller element may even
//give a correct solution

void solve(){
    
    int n, m;
    cin >> n >> m;
    
    int ar[n];
    
    for(int i = 0; i < n; i++)
    cin >> ar[i];
    
    if(is_sorted(ar, ar + n))
    {
        cout << 0 << "\n";
        return;
    }
    
    int count = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(ar[i] > ar[i + 1])
        {
            for(int j = 0; j < i + 1; j++)
            {
                if(ar[j] > m)
                {
                    swap(ar[j], m);
                    count++;
                }
            }
        }
    }
            
    if(is_sorted(ar, ar + n))
    cout << count << "\n";
    else
    cout << -1 << "\n";
    
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