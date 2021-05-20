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

    int n;
    cin >> n;
    int ar[n];
    int count = 0;
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        if(mp[ar[i]] == 0)
        {
            count++;
            mp[ar[i]] = 1;
        }
        else
        {
            if(mp[ar[i] + 1] == 0)
            {
                count++;
                mp[ar[i] + 1] = 1;
            }
        }
    }
    
    cout << count << "\n";
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