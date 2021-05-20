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

bool isPerfectSquare(long double x) 
{   
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
} 

void solve()
{
    int n;
    cin>>n;
    int x = floor(sqrt(n));
    int y;
    if(n%x==0)
    y = ceil(n/x);
    else
    y = ceil(n/x+1);
    
    //cout<<x<<" "<<y<<" ";
    
    cout<<x + y - 2<<"\n";
	


}

int32_t main(void)
{
	fastio
	int ak = 1;
	int t = 1;
	cin >> t;
	while (t--)
	{
		//cout << "Case #" <ak << ": ";
		solve();
		//ak++;
	}
	//cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}