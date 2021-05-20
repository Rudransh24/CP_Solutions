//Show them your PROGRESS
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma")

//SOURCE GEEKSFORGEEKS

bool findPartiion(int arr[], int n)
{
    int sum = 0;
    int i, j;
    for (i = 0; i < n; i++)
        sum += arr[i];
 
    if (sum % 2 != 0)
        return false;
 
    bool part[sum / 2 + 1];
    for (i = 0; i <= sum / 2; i++) {
        part[i] = 0;
    }
 
    for (i = 0; i < n; i++) {

        for (j = sum / 2; j >= arr[i];
             j--) 
             {

            if (part[j - arr[i]] == 1 || j == arr[i])
                part[j] = 1;
        }
    }
 
    return part[sum / 2];
}
 

void solve(){
    
    int n;
    cin >> n; 
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    
    if(findPartiion(ar, n))
    {
        for(int j = 0; j < n; j++)
        {
            int x = ar[j];
            ar[j] = 0;
            if(!findPartiion(ar, n))
            {
                cout << 1 << "\n";
                cout << j + 1 << "\n";
                return;
            }
            
            ar[j] = x;
        }
    }
    else
    cout << 0 << "\n";
    
    
}

int32_t main() {
	
	selena
	int tc = 1;
	//cin >> tc;
	while(tc--){
	    solve();
	}
	return 0;
}