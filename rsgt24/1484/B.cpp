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
    
    int ar[n];
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        s.insert(ar[i]);
    }
    
    int x1 = s.size();
    if(x1 == 1)
    {
        cout << 0 << "\n";
        return;
    }
    
    set<int> diff;
    int check = 0;
    for(int i = 1; i < n; i++)
    {
        if(ar[i] - ar[i - 1] > 0)
        {
            diff.insert(ar[i] - ar[i - 1]);
        }
        else
        check = 1;
    }
    
    int x2 = diff.size();
    if(check == 0 && x2 == 1)
    {
        cout << 0 << "\n";
        return;
    }
    
    set<int> diff1;
    int check1 = 0;
    for(int i = 1; i < n; i++)
    {
        if(ar[i] - ar[i - 1] < 0)
        {
            diff1.insert(ar[i - 1] - ar[i]);
        }
        else
        check1 = 1;
    }
    
    int x21 = diff1.size();
    if(check1 == 0 && x21 == 1)
    {
        cout << 0 << "\n";
        return;
    }

    set<int> inc, dec;
    int x3, x4;
    //first checking increasing differences
    for(int i = 1; i < n; i++)
    {
        if(ar[i] - ar[i - 1] > 0)
        inc.insert(ar[i] - ar[i - 1]);
    }
    
    for(int i = 1; i < n; i++)
    {
        if(ar[i] - ar[i - 1] < 0)
        dec.insert(ar[i - 1] - ar[i]);
    }
    
    x3 = inc.size();
    x4 = dec.size();
    int f = 0;
    if((x3 != 1) || (x4 != 1))
    {
        f = 1;
    }
    
    if(f == 1)
    cout << -1 << "\n";
    else
    {
        int c = *inc.begin();
        int m = abs(*dec.begin()) + c;
        //cout << c << " " << m << "\n";
        
        int cc = 0;
            
        for(int i = 1; i < n; i++)
        {
            if(ar[i] != (ar[i - 1] + c) % m)
            cc = 1;
        }
            
        if(cc == 0 && c < m && ar[0] < m)
        cout << m << " " << c << "\n";
        else
        cout << -1 << "\n";
    }
    
    
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