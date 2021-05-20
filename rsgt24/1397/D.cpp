/******

AUTHOR : RUDRANSH TRIPATHI, IIIT NAGPUR, CCID(rt24) & CFID(rsgt24)

MOTTO : Use criticism as fuel and you will never run out of energy.
        AIM : TO BECOME A BETTER CODER
        INTROSPECT + COURSE CORRECTIONS = CATALYST FOR SUCCESS
        Every moment is an opportunity to better yourself

*******/

#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int unsigned long long int
#define pb push_back
#define d(x) cout<<x<<"\n"

void solve()
{
	int n;
	cin >> n ;
	int ar[n];
    int sum = 0;
    int max_1 = INT_MIN;
	for (int i = 0; i < n; i++)
	{
	    cin >> ar[i];
	    //sum += ar[i];
	    //max_1 = max(max_1 , ar[i]);
	}
	
	if(n%2 == 1)
	{
	    cout << "T" << "\n";
	}
	else
	{
	    cout << "HL" << "\n";
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
	return 0;
}