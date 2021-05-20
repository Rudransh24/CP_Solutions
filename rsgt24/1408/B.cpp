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
	
	int n;
	double k;
	cin>>n>>k;
	int ar[n];
	set<int> s;
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	    s.insert(ar[i]);
	}
	
	if(k==1)
	{
	    if(s.size()==1)
	    cout<<1<<"\n";
	    else
	    cout<<-1<<"\n";
	}
	else
	{
	    if(s.size()<=k)
	    cout<<1<<"\n";
	    else
	    {   
	        k-=1;
	        double x = s.size()-1;
	        cout<<ceil(x/k)<<"\n";
	    }
	}
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