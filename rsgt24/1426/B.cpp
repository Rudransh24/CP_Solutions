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

	/*int n, k,x;
	cin >> n >> x;
	
    n = n + x - 2;
    
    if(n % x == 0)
    cout << n / x << "\n";
    else
    {
        cout<< n / x + 1 << "\n";
    }*/
    
    int n,m;
	cin>>n>>m;
	int k = n*2;
	int count = 0;
	while(k)
	{
	    int a,b,c,d;
	    cin>>a>>b;
	    cin>>c>>d;
	    
	    if(b==c)
	    count++;
	    
	    k-=2;
	}
	
	if(count>0&&m%2==0)
	cout<<"YES"<<"\n";
	else
	cout<<"NO"<<"\n";




}

int32_t main(void)
{
	fastio
	int ak = 1;
	int t = 1;
	cin >> t;
	while (t--)
	{
		//cout << "Case #" << ak << ": ";
		solve();
		//ak++;
	}
	//cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}