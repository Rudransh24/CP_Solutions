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

    int n, k;
    cin >> n;
    
    int ar[n];
    for(int i = 0; i < n; i++)
    cin >> ar[i];
    
    int count = 0;
    set<int> s;
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(abs(ar[i] - ar[j]) != 0)
            s.insert(abs(ar[i] - ar[j]));
        }
    }
    
    cout << s.size() << "\n";
    
    
    
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