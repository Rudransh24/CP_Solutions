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
    int n,k;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	int min_1=*min_element(ar,ar+n);
	int count = 0;
	int pos;
	for(int i=0;i<n;i++)
    {
        if(ar[i]==min_1)
        {
            pos=i;
            break;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(i!=pos)
        {
            count+=((abs(k-ar[i]))/min_1);
        }
    }
	
	cout<<count<<"\n";
	
	/*int n,k;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++)
	cin>>ar[i];*/
	
	
	
	

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