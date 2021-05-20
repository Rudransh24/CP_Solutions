#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int n,k;
    cin >> n >> k;
    string t;
    cin >> t;

    int flag = 0;

    for (int i = 1; i < t.size(); i++) {
        if (t.substr(i) == t.substr(0, t.size() - i)) {
            flag = i;
            break;
        }
    }

    if (!flag)
        for (int i = 0; i < k; i++)
            cout << t;
    else {
        cout << t;
        for (int i = 0; i < k - 1; i++)
            cout << t.substr(t.size() - flag);
    }

    return 0;
}