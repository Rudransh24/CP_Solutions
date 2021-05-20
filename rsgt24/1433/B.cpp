#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

int getMaxLength(bool arr[], int n) 
{ 
    int count = 0; //intitialize count 
    int result = 0; //initialize max 
  
    for (int i = 0; i < n; i++) 
    { 
        // Reset count when 0 is found 
        if (arr[i] == 0) 
            count = 0; 
  
        // If 1 is found, increment count 
        // and update result if count becomes 
        // more. 
        else
        { 
            count++;//increase count 
            result = max(result, count); 
        } 
    } 
  
    return result; 
} 

void solve()
{
	int n;
	cin>>n;
	int ar[n];
	
	for(int i=0;i<n;i++)
	cin>>ar[i];
	
	int ans = 0;
	for(int i=0;i<n;i++)
	{
	    int count = 0;
	    if(ar[i]==1)
	    {
	        int f = 0;
	        for(int j=i+1;j<n;j++)
	        {
	            if(ar[j]==1)
	            {
	                f = 1;
	                break;
	            }
	            else
	            {
	                count++;
	            }
	        }
	        
	        if(f==1)
	        ans += count;
	    }
	    else
	    {
	        continue;
	    }
	}
	
	cout << ans << "\n";
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
	cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}