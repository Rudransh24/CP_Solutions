#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

void solve()
{
    int n;
    cin>>n;
    if(n%5==0)
    {
        cout << 0 << " " << n/5 << " " << 0 << "\n";
    }
    else if(n%7==0)
    {
        cout << 0 << " " << 0 << " " << n/7 << "\n";
    }
    else if(n%3==0)
    {
        cout << n / 3 << " " << 0 << " " << 0 << "\n";
    }
    else
    {
        int r = n % 3;
        int a1 = n / 3;
        int a3 = 0;
        int a2 = 0;
        if(r==1&&n>=7)
        {
            a1 -= 2;
            a3++;
            
        }
        else if(r==2&&n>=5)
        {
            a1--;
            a2++;
        }
        else
        {
            cout << -1 << "\n";
            return;
        }
        
        cout << a1 <<" " << a2 << " " <<a3 << "\n";
    }
    
    
}


int32_t main(void)
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}