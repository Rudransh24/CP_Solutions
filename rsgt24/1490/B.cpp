#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define int unsigned long long int
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
    int n;
    cin >> n;
    int ar[n];
    
    int c0 = 0, c1 = 0, c2 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(ar[i] % 3 == 0)
        c0++;
        else if(ar[i] % 3 == 1)
        c1++;
        else
        c2++;
    }
    
    int count = 0;
    if(c0 == c1 && c1 == c2)
    cout << 0 << "\n";
    else
    {
        int x = (c0 + c1 + c2) / 3;
        //cout << c0 << " " << c1 << " " << c2 << "\n";
        if(c0 < x)
        {
            int y = x - c0;
            c0 += (x - c0);
            count += y;
            c2 -= y;
        }
        else
        {
            int y = c0 - x;
            c0 -= y;
            count += y;
            c1 += y;
        }
        
        //cout << c0 << " " << c1 << " " << c2 << "\n";
        if(c0 == c1 && c1 == c2)
        {
            cout << count << "\n";
            return;
        }
        
        x = (c0 + c1 + c2) / 3;
        
        if(c1 < x)
        {
            int y = x - c1;
            c1 += (x - c1);
            count += y;
            c0 -= y;
        }
        else
        {
            int y = c1 - x;
            c1 -= y;
            count += y;
            c2 += y;
        }
        //cout << c0 << " " << c1 << " " << c2 << "\n";
        if(c0 == c1 && c1 == c2)
        {
            cout << count << "\n";
            return;
        }
        
        x = (c0 + c1 + c2) / 3;
        
        if(c2 < x)
        {
            int y = x - c2;
            c2 += (x - c2);
            count += y;
            c1 -= y;
        }
        else
        {
            int y = c2 - x;
            c2 -= y;
            count += y;
            c0 += y;
        }
        //cout << c0 << " " << c1 << " " << c2 << "\n";
        cout << count << "\n";
    }
        
    
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