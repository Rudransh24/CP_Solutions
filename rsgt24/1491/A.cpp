#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int findKthLargest(vector<int> const &A, int k)
{
    priority_queue<int, vector<int>> pq(less<int>(), A);
    while (--k) {
        pq.pop();
    }
    return pq.top();
}

void solve()
{
    int n, q;
    cin >> n >> q;
    
    int ar[n];
    vector<int> v;
    int c1 = 0, c0 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        v.pb(ar[i]);
        if(ar[i] == 0)
        c0++;
        else
        c1++;
    }
    
    while(q--)
    {
        int k, x;
        cin >> k;
        
        if(k == 1)
        {
            cin >> x;
            if(ar[x - 1] == 1)
            {
                c1--;
                c0++;
            }
            else
            {
                c0--;
                c1++;
            }
            
            ar[x - 1] = 1 - ar[x - 1];
            v[x - 1] = 1 - v[x - 1];
            
        }
        else
        {
            cin >> x;
            if(c1 >= (x))
            cout << 1 << "\n";
            else
            cout << 0 << "\n";
        }
    }
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
	cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}