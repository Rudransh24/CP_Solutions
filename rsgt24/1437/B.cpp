#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

bool isTwoAlter(string s) 
{ 
	for (int i = 0; i < s.length() - 2; i++) { 
		if (s[i] != s[i + 2]) { 
			return false; 
		} 
	} 
	if (s[0] == s[1]) 
		return false; 

	return true; 
}


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

int getMaxLength2(bool arr[], int n) 
{ 
    int count = 0; //intitialize count 
    int result = 0; //initialize max 
  
    for (int i = 0; i < n; i++) 
    { 
        // Reset count when 0 is found 
        if (arr[i] == 1) 
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

int power(int x, int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
} 

void solve()
{
    int n; 
    cin >> n;
    bool ar[n];
	string x;
	cin >> x;
	bool f = 1;
	int flag = 0;
	int count = 0;
	
	if(isTwoAlter(x))
	{
	    //d(1);
	    cout << 0 << "\n";
	}
	else
	{
	    int cnt1=0;
	    int cnt2 =0;
	    for(int i = 0;i<n;i++)
	    {
	        if(x[i] == x[i+1])
	        {
	            if(x[i]=='1')
	            cnt1++;
	            else
	            cnt2++;
	        }
	    }
	    
	    cout<<max(cnt1,cnt2)<<"\n";
	    
	   
	}
	
	
	
	
	
	
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