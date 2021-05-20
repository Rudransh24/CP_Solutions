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

    string s;
    cin >> s;
    int n = s.size();
    int s1[n];
    for(int i = 0; i < n; i++)
    {
        s1[i] = (int)(s[i]);
    }
    int temp =  rand() % 100 + 123;//greater ascii value then 122 which is of 'z'
    int count = 0;
    for(int i = 0; i < n - 2; i++)
    {
        if(s1[i] == s1[i + 1])
        {
            count++;
            s1[i + 1] = temp;
            temp++;
        }
        if(s1[i] == s1[i + 2])
        {
            count++;
            s1[i + 2] = temp;
            temp++;
        }
    }
    
    if(s1[n - 1] == s1[n - 2])
    count++;
    
    
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