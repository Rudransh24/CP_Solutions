#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    string x;
    cin >> x;
    
    int dis = 0;
    int count = 0;
    int count2 = 0;
    int dis2 = 0;
    int diss = 0;
    int diss2 = 0;
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == '(')
        {
            dis++;
        }
        else if(x[i] == ')')
        {
            if(dis == 0)
            dis2++;
            else
            {
                dis--;
                count++;
            }
        }
        else if(x[i] == '[')
        {
            diss++;
        }
        else if(x[i] == ']')
        {
            if(diss == 0)
            diss2++;
            else
            {
                diss--;
                count2++;
            }
        }
        
    }
    
    cout << count + count2 << "\n";
    
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