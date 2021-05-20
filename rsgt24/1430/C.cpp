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
    if(n==1)
    cout<<1<<"\n";
    else if(n==2)
    {
        cout<<2<<"\n";
        cout<<1<<" "<<2<<"\n";
    }
    else
    {
        cout<<2<<"\n";
        int x = n-2;
        int y = n;
        
        int j=0;
        
        for(int i=0;i<n-1;i++)
        {
            cout<<x<<" "<<y<<"\n";
            if(j==0)
            {
                x++;
                y--;
                j=1;
            }
            else if(j==1)
            {
                x-=2;
                j=3;
            }
            else
            {
                x--;
                y--;
            }
        }
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