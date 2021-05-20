#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;

void solve()
{
    int n;
    cin >> n;
    vector<int> w(n + 1);
    
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
        sum += w[i];
    }
    vector<int> adj[N];
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        if (adj[i].size() - 1)
             mp[-w[i]] += adj[i].size() - 1;
    }
    // deb(mp);
    cout << sum << " ";
    for (auto x : mp)
    {
        for (int i = 0; i < x.second; i++)
        {
            sum += -x.first;
            cout << sum << " ";
        }
    }
    cout << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}