//Show them your PROGRESS

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
   int n;
   cin >> n;
   
   char ar[n][n];
   
   for(int i = 0; i < n; i++)
   for(int j = 0; j < n; j++)
   cin >> ar[i][j];
   
   int x1 = -1;
   int y1;
   int y2;
   int x2 = -1;
   for(int i = 0; i < n; i++)
   {
       for(int j = 0; j < n; j++)
       {
           if(ar[i][j] == '*' && x1 == -1)
           {
               x1 = i;
               y1 = j;
               continue;
           }
           if(ar[i][j] == '*' && x2 == -1)
           {
               x2 = i;
               y2 = j;
               continue;
           }
       }
   }

   
   if (x1 == x2) {
       
        if(x1 + 1 < n && x2 + 1 < n){
        ar[x1+1][y1] = '*';
        ar[x2+1][y2] = '*';
        }
        else
        {
            ar[x1-1][y1] = '*';
            ar[x2-1][y2] = '*';
        }

    }
    else if (y1 == y2) {
        
        if(y1 + 1 < n && y2 + 1 < n){
        ar[x1][y1+1] = '*';
        ar[x2][y2+1] = '*';
        }
        else
        {
            ar[x1][y1-1] = '*';
            ar[x2][y2-1] = '*';
        }
    }
    else{
 
        ar[x1][y2] = '*';
        ar[x2][y1] = '*';
    }
   
   for(int i = 0; i < n; i++)
   {
        for(int j = 0; j < n; j++)
        cout<<ar[i][j];
        cout<<"\n";
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