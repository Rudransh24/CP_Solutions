//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
   int a, b;
   cin >> a >> b;
   string s;
   cin >> s;
   
   int c0=0;
   int c1=0;
   
   int n = s.size();
   
   int flag = 0;
   
   for(int i = 0; i < n; i++)
   {
       if(s[i] == '0')
       {
           if(s[n - i - 1] == '0')
           continue;
           else if(s[n - i - 1] == '?')
           s[n - i - 1] = '0';
           else
           {
               flag = 1;
               break;
           }
       }
       else if(s[i] == '1')
       {
           if(s[n - i - 1] == '1')
           continue;
           else if(s[n - i - 1] == '?')
           s[n - i - 1] = '1';
           else
           {
               flag = 1;
               break;
           }
       }
   }
   
   for(int i = 0; i < s.size(); i++)
   {
       if(s[i] == '0')
       c0++;
       else if(s[i] == '1')
       c1++;
   }
   
   a -= c0;
   b -= c1;
   
   for(int i = 0, j = n - 1; i < j; i++, j--)
   {
       if(s[i] == '?' && s[j] == '?')
       {
            if(a > 1)
            {
                s[i] = '0';
                s[j] = '0';
                a -= 2;
            }
            else if(b > 1)
            {
                s[i] = '1';
                s[j] = '1';
                b -= 2;
            }
            else
            {
                flag = 1;
                break;
            }
       }
   }
   
    if(n & 1)
    {
        if(s[n / 2] == '?')
        {
            if(a > 0)
            {
                s[n / 2] = '0';
                a -= 1;
            }
            else if(b > 0)
            {
                s[n / 2] = '1';
                b -= 1;
            }
            else 
            flag = 1;
        }
    }
    
    
    if(a == 0 and b == 0 and flag == 0)
    {
        cout << s << "\n";
    }
    else cout << -1 << "\n";
    
}

int32_t main() {
	
	selena
	int kk = 1;
	int tc = 1;
	cin >> tc;
	while(tc--){
	    //cout << "Case #" << kk << ": ";
	    solve();
	    kk++;
	}
	return 0;
}