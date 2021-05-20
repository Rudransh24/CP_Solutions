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
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

void solve()
{
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    vector<vector<int> > matrix( n , vector<int> (m, 0)); 
    int max_1=INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        cin>>ar[i][j];
        matrix[i][j]=ar[i][j];
        sum+=ar[i][j];
    }
    int ans;
    if(sum%(n*m)==0)
    ans = sum / (n*m);
    else
    ans = sum / (n*m) + 1;
    int a1 = 0;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        a1+=abs(ans - ar[i][j]);
    }
    
    cout<<a1<<"\n";
    
    
    
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