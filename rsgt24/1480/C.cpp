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

int32_t main(void)
{
	int n;
	cin >> n;
	int a, b, c;
	int l = 0, r = n - 1;
	
	
	while(l <= r)
	{
	    int mid = l + (r - l) / 2; 
	    cout << "?" << " " << mid + 1 << endl;
	    cin >> a;
	    
	    if(mid != 1)
	    {
	        cout << "?" << " " << mid << endl;
	        cin >> b;
	    }
	    
	    if(mid != n)
	    {
	        cout << "?" << " " << mid + 2 << endl;
	        cin >> c;
	    }
	    
	    int f = min(b, c);
	    
	    if(a < f)
	    {
	        cout << "!" << " " << mid + 1 << endl;
	        exit(0);
	    }
	    
	    if(a > b)
	    {
	        r = mid - 1;
	    }
	    else
	    l = mid + 1;
	}
	return 0;
}