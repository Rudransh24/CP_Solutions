#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

void leftRotatebyOne(int arr[], int n) 
{ 
    int temp = arr[0], i; 
    for (i = 0; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
  
    arr[i] = temp; 
} 
  
/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n) 
{ 
    for (int i = 0; i < d; i++) 
        leftRotatebyOne(arr, n); 
} 


void solve()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    
    string out = "YES";
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        leftRotate(ar, 1, n);
        for(int j=0;j<n;j++)
        {
            sum+=ar[j];
            if(sum==0)
            break;
        }
        
        if(sum!=0)
        {
            cnt = 1;
            break;
        }
    }
    
    if(cnt)
    {
        cout<<out<<"\n";
        for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
        cout<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
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