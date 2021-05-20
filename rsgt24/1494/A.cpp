#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    string s;
    cin >> s;
    
    int ans = 0;
    string x = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A')
        x += '(';
        else if(s[i] == 'B')
        x += '(';
        else
        x += ')';
    }
    
    int f = 0;
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == '(')
        f++;
        else
        f--;
    }
    
    int close = 0, open = 0;
    for (int i = 0; i < x.size(); i++) 
	{
		if (x[i] == '(') 
			open++; 
		else
			close++; 
		if (close > open) 
		{ 
			f = 1;
			break; 
		} 
	} 
    
    if(f == 0)
    ans = 1;
    
    //cout << x << "\n";
    
    x = "";
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A')
        x += '(';
        else if(s[i] == 'B')
        x += ')';
        else
        x += '(';
    }
    
    f = 0;
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == '(')
        f++;
        else
        f--;
    }
    
    close = 0, open = 0;
    for (int i = 0; i < x.size(); i++) 
	{
		if (x[i] == '(') 
			open++; 
		else
			close++; 
		if (close > open) 
		{ 
			f = 1;
			break; 
		} 
	} 
    
    if(f == 0)
    ans = 1;
    
    //cout << x << "\n";
    
    x = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A')
        x += ')';
        else if(s[i] == 'B')
        x += '(';
        else
        x += ')';
    }
    
    f = 0;
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == '(')
        f++;
        else
        f--;
    }
    
    close = 0, open = 0;
    for (int i = 0; i < x.size(); i++) 
	{
		if (x[i] == '(') 
			open++; 
		else
			close++; 
		if (close > open) 
		{ 
			f = 1;
			break; 
		} 
	} 
    
    if(f == 0)
    ans = 1;
    //cout << x << "\n";
    
    x = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A')
        x += ')';
        else if(s[i] == 'B')
        x += ')';
        else
        x += '(';
    }
    
    f = 0;
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == '(')
        f++;
        else
        f--;
    }
    
    close = 0, open = 0;
    for (int i = 0; i < x.size(); i++) 
	{
		if (x[i] == '(') 
			open++; 
		else
			close++; 
		if (close > open) 
		{ 
			f = 1;
			break; 
		} 
	} 
    
    if(f == 0)
    ans = 1;
    
    //cout << x << "\n";
    
    x = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A')
        x += ')';
        else if(s[i] == 'B')
        x += '(';
        else
        x += '(';
    }
    
    f = 0;
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == '(')
        f++;
        else
        f--;
    }
    
    close = 0, open = 0;
    for (int i = 0; i < x.size(); i++) 
	{
		if (x[i] == '(') 
			open++; 
		else
			close++; 
		if (close > open) 
		{ 
			f = 1;
			break; 
		} 
	} 
    
    if(f == 0)
    ans = 1;
    //cout << x << "\n";
    x = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A')
        x += '(';
        else if(s[i] == 'B')
        x += ')';
        else
        x += ')';
    }
    
    f = 0;
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == '(')
        f++;
        else
        f--;
    }
    //cout << f << "\n";
    close = 0, open = 0;
    for (int i = 0; i < x.size(); i++) 
	{
		if (x[i] == '(') 
			open++; 
		else
			close++; 
		if (close > open) 
		{ 
			f = 1;
			break; 
		} 
	} 
    //cout << f << "\n";
    if(f == 0)
    ans = 1;
    //cout << x << "\n";
    
    if(ans)
    cout << "YES" << "\n";
    else
    cout << "NO" << "\n";
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
	cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}