#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 400005;
const int MAXN = 100000;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"

void solve()
{
	int n;
	cin>>n;
	string x;
	cin>>x;
	int count=0,count1=0,count2=0;
	for(int i=0;i<n;i++)
	{
	    if(x[i]=='<')
	    count++;
	    else if(x[i]=='>')
	    count1++;
	    else
	    count2++;
	}
	
	int ans = 0;
	if(count==0||count1==0)
	cout<<n<<"\n";
	else
	{
	    int sum = 0;
	    int dash = 0;
	    int clock1 = 0;
	    int backclock = 0;
	    //int dash[n]={0};
	    for(int i=0;i<n;i++)
	    {
	        if(x[i]=='-')
	        {
	            sum++;
	        }
	        else
	        {
	            if(i==0&&x[n-1]=='-' || i!=0&&x[i - 1]=='-')
	            sum++;
	            /*if(x[i]=='<')
	            {
	                if(i==0&&x[n-1]=='-' || i!=0&&x[i - 1]=='-')
	                sum++;
	            }
	            else if(x[i]=='>')
	            {
	                
	            }*/
	        }
	    }
	    
	    //for(int i=0;i<n;i++)
	    //cout<<dash[i]<<" ";
	    //cout<<"\n";
	    
	    cout << sum << "\n";
	}
	
	
	
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
	return 0;
}