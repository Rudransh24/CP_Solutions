#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    
    int ar[n];
    
    for(int i = 0; i < n; i++)
    cin >> ar[i];
    
    sort(ar, ar + n, greater<int>());
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] != 1)
        {
            int x = i + ar[i];
            if(x < n)
            {
                for(int j = x; j > i; j--)
                {
                    if(ar[j] == 1)
                    continue;
                    ar[j]--;
                }
            }
            count += ar[i] - 1;
        }
    }
    cout << count << "\n";
}

int32_t main(void)
{
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