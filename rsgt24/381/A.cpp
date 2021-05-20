#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed 1.0 * clock() / CLOCKS_PER_SEC

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int i = 0;
    int j = n - 1;
    int cnt = 1;
    int ans1 = 0;
    int ans2 = 0;

    while (i <= j)
    {
        if (cnt)
        {
            if (ar[i] > ar[j])
            {
                ans1 += ar[i];
                i++;
            }
            else
            {
                ans1 += ar[j];
                j--;

            }

            cnt = 0;
        }
        else
        {
            if (ar[i] > ar[j])
            {
                ans2 += ar[i];
                i++;
            }
            else
            {
                ans2 += ar[j];
                j--;

            }

            cnt = 1;
        }
    }

    cout << ans1 << " " << ans2 << "\n";
}
int32_t main()
{
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
    fastio
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    cerr << "Time elapsed : " << time_passed << "\n";
    return 0;
}