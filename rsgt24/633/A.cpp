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

bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int cnt = 0;
    for(int i=0;i<=10000;i++)
    {
        int x = a*i;
        int y;
        for(int j=0;j<=10000;j++)
        {
            y=b*j;
            if(x+y==c)
            {
                cnt=1;
            }
        }
    }
    for(int i=0;i<=10000;i++)
    {
        int x = b*i;
        int y;
        for(int j=0;j<=10000;j++)
        {
            y=a*j;
            if(x+y==c)
            {
                cnt=1;
            }
        }
    }
    
    if(cnt)
    cout<<"Yes"<<"\n";
    else
    cout<<"No"<<"\n";
    
}

int32_t main(void)
{
	fastio
	int ak = 1;
	int t = 1;
	//cin >> t;
	while (t--)
	{
		//cout << "Case #" <ak << ": ";
		solve();
		//ak++;
	}
	//cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}