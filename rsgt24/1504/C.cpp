//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    string a, b;
    a = "";
    b = "";
    
    //form pair of ()()()() pattern
    if(n % 2 == 0)
    {
        for(int i = 0; i < n / 2; i++)
        {
            a += "()";
        }
    }
    else
    {
        for(int i = 0; i < n / 2; i++)
        {
            a += "()";
        }
        
        a += '(';
    }
    
    //now we got A with A try to form B alternatively
    int open = 0, close = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] != '1')
        {
            if(a[i] == '(')
            {
                close++;
                b += ')';
            }
            else
            {
                open++;
                b += '(';
            }
        }
        
        if(s[i] == '1')
        {
            if(a[i] == '(')
            {
                b += '(';
                open++;
            }
            else
            {
                b += ')';
                close++;
            }
        }
        
        if(close > open)
        {
            cout << "NO" << "\n";
            return;
        }
    }
    
    
    if(close == open)
    {
        cout << "YES" << "\n";
        cout << a << "\n";
        cout << b << "\n";
    }
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