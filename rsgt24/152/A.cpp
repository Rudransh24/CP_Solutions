#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define print(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

void solve()
{
          int n, m;
          cin >> n >> m;
          string ar[n];
          
          for(int i = 0; i < n; i++)
          cin >> ar[i];
          
          set<int> s;
          for(int i = 0; i < m; i++)
          {
                    int max_1 = 0;
                    for(int j = 0; j < n; j++)
                    {
                              //cout << ar[j][i] << " ";
                              max_1 = max(max_1, ar[j][i] - '0');
                    }
                    //cout << "\n";
                    for(int j = 0; j < n; j++)
                    {
                              if(ar[j][i] - '0' == max_1)
                              s.insert(j);
                    }
          
          }
          
          //for(auto i: s)
          //cout << i << " ";
          //cout << "\n";
          cout << s.size() << "\n";
}

int32_t main(void)
{
          fastio
	int t = 1;
	//cin >> t;
	while (t--)
	{
		solve();
	}
	//cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}