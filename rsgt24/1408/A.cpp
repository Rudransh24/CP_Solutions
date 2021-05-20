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
    
	int n;cin >> n;
	int a[n], b[n], c[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
	}
	int count = 0;
	int ka = a[0];
	int k = a[0];
	cout << a[0] << " ";
	for (int i = 1; i < n; i++)
	{
		if (ka != a[i] && k != a[n - 1])
		{
			cout << a[i] << " ";
			ka = a[i];
		}
		else if (ka != b[i] && k != b[n - 1])
		{
			cout << b[i] << " ";
			ka = b[i];
		}
		else
		{
			cout << c[i] << " ";
			ka = c[i];
		}
	}
	cout << "\n";
	
	/*int n,k;
	cin>>n>>k;
	int ar[n];
	set<int> s;
	map<int,int> mp;
	int max_1=INT_MIN;
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	    s.insert(ar[i]);
	    mp[ar[i]]++;
	    max_1=max(max_1,mp[ar[i]]);
	}
	
	if(k==1&&s.size()==1)
	cout<<1<<"\n";
	else if(k==1&&s.size()!=1)
	cout<<-1<<"\n";
	else
	{
	    if(s.size()<=k)
	    cout<<1<<"\n";
	    else
	    {
	        cout<<ceil((s.size()-1)/(k-1))<<"\n";
	    }
	}*/
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