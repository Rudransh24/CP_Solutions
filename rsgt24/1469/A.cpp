//Show them your progress....

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

//Time complexity: O(Log(min(a, b)))
//study of algos.....
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}

void solve(){

    string x;
    cin >> x;
    int f = 0;
    int count = 0;
    for(int i = 0; i < x.size(); i++)
    {
        if(i == 0 && x[i] == ')')
        {
            f = 1;
            break;
        }
        else if(i == x.size() - 1 && x[i] == '(')
        {
            f = 1;
            break;
        }
        else if(x[i] == '?')
        count++;
    }
    
    if(f)
    cout << "NO" << "\n";
    else if(count % 2 == 0)
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