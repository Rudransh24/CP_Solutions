//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
   /*int a, b;
   cin >> a >> b;
   string s;
   cin >> s;
   
   int c0=0;
   int c1=0;
   for(int i = 0; i < s.size(); i++)
   {
       if(s[i] == '0')
       c0++;
       else if(s[i] == '1')
       c1++;
   }
   
   a -= c0;
   b -= c1;
   
   int cnt = 0;
   for(int i = 0; i < s.size(); i++)
   {
       if(s[i] == '?')
       cnt++;
   }
   
   if(cnt != (a + b))
   {
       cout << -1 << "\n";
       return;
   }
   
   if(cnt == 0)
   {
       if(c0 != a || c1 != b)
       {
           cout << -1 << "\n";
           return;
       }
   }
   
   for(int i = 0, j = s.size() - 1; i < j; i++, j--)
   {
       if(s[i] == '?' && s[j] == '1')
       s[i] = '1';
       else if(s[i] == '1' && s[j] == '?')
       s[j] = '1';
       else if(s[i] == '?' && s[j] == '0')
       s[i] = '0';
       else if(s[i] == '0' && s[j] == '?')
       s[j] = '0';
       else if(s[i] == '?' && s[j] == '?')
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
       }
   }
   int f = 0;
   for(int i = 0, j = s.size() - 1; i < j; i++, j--)
   {
       if(s[i] != s[j] || (s[i] == '?' && s[j] == '?'))
       f = 1;
   }
   
   if(s.size() == 1)
   {
       if(s[0] == '?' && a == 1 && b == 0)
       cout << 0 << "\n";
       else if(s[0] == '?' && a == 0 && b == 1)
       cout << 1 << "\n";
       else
       cout << s << "\n";
   }
   else
   {
        if(s[s.size() / 2] == '?')
        {
            if(a == 1 && b == 0)
            {
                s[s.size() / 2] = '0';
                cout << s << "\n";
            }
            else if(b == 1 && a == 0)
            {
                s[s.size() / 2] = '1';
                cout << s << "\n";
            }
            else
            cout << -1 << "\n";
            
            
        }
        else
        {
            if(f)
            cout << -1 << "\n";
            else
            cout << s << "\n";
        }
    }*/
   
   int n;
   cin>>n;
   int ar1[n];
   int ar[n+2];
   for(int i=0;i<n+2;i++)
   cin>>ar[i];
   
   sort(ar,ar+n+2);
   for(int i=0;i<n;i++)
   ar1[i]=ar[i];
   
   int sum = ar[n];
   int sum1 = ar[n+1];
   
   int temp = 0;
   
   for(int i = 0; i < n; i++)
   {
       temp += ar[i];
   }
   
   if(temp == sum)
   {
       for(int i = 0; i < n; i++)
       {
           cout << ar[i] << " ";
       }
       cout << "\n";
   }
   else
   {
       int ind = INT_MIN;
       temp += sum;
       for(int i = 0; i < n + 1; i++)
       {
           if(temp - ar[i] == sum1)
           {
               ind = i;
           }
       }
       
       if(ind == INT_MIN)
       cout << -1 << "\n";
       else
       {
           for(int i = 0; i < n + 1; i++)
           {
               if(i != ind)
               cout << ar[i] << " ";
           }
           cout << "\n";
       }
   }
   
   
   
   
   
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