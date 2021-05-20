//chutiya question 

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

vector<int> v;

void div(int n)
{
    int max_1=INT_MIN;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                v.pb(i);
            }
            else
            {
                v.pb(i);
                v.pb(n/i);
            }
        }
    }
    
}

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
    int n,x,y;
    cin>>n>>x>>y;
    
    if(n==2)
    {
        cout<<x<<" "<<y<<"\n";
    }
    else
    {
        int qq=abs(x-y);
        int yy=qq/(n-1);
        div(qq);
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(yy==1)
            {
                if(v[i]>yy)
            {
                ans=v[i];
                break;
            }
            
            }
            else
            {
            if(v[i]>=yy)
            {
                ans=v[i];
                break;
            }
            }
        }
        
        int min_1=min(x,y);
        
        if(isPrime(qq))
        {
            for(int i=0;i<n;i++)
            {
                cout<<min_1<<" ";
                min_1+=qq;
            }
            cout<<"\n";
        }
        else
        {
            int xx=ans;
            if(yy==1)
            {
                for(int i=0;i<n;i++)
            {
                cout<<yy<<" ";
                yy+=ans;
            }
            }
            else
            {
            if(qq%(n-1)!=0)
            for(int i=0;i<n;i++)
            {
                cout<<xx<<" ";
                xx+=ans;
            }
            else
            for(int i=0;i<n;i++)
            {
                cout<<min_1<<" ";
                min_1+=ans;
            }
            }
            cout<<"\n";
        }
        
    }
    
    v.clear();
    
}

int32_t main(void)
{
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
	fastio
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}