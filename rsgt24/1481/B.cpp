#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

//basic mathematics
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}

bool isPowerOfTwo (int x) 
{ 
    return x && (!(x & (x-1))); 
} 

void solve()
{
	int n, k;
	cin >> n >> k;
	
	int ar[n];
	
	for(int i = 0; i < n; i++)
	cin >> ar[i];
	
	int count = 0;
	int pos = -1;
	int b;
	int f = 0;
	while(1)
	{
	    b = 0;
	    for(int i = 0; i < n - 1; i++)
	    {
	        if(ar[i] < ar[i + 1])
	        {
	            ar[i]++;
	            pos = i + 1;
	            count++;
	            b = -1;
	        }
	        else
	        continue;
	        
	        if(count == k)
	        {
	            f = 1;
	            break;
	        }
	        
	        if(b == -1)
	        break;
	    }
	    
	    if(b == 0)
	    break;
	    
	    if(f)
	    break;
	}
	
	if(f)
	cout << pos << "\n";
	else
	cout << -1 << "\n";
	
}

int32_t main(void)
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}