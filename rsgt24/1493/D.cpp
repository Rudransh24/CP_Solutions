//Show them your PROGRESS
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 5;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

int getMid(int s, int e) 
{ 
    return (s + (e - s) / 2); 
} 

int getGcdUtil(int* st, int ss, int se, int qs, int qe, int si) 
{ 

    if (qs <= ss && qe >= se) 
        return st[si]; 

    if (se < qs || ss > qe) 
        return 0; 
    int mid = getMid(ss, se); 
    return __gcd(getGcdUtil(st, ss, mid, qs, qe, 2 * si + 1), 
                 getGcdUtil(st, mid + 1, se, qs, qe, 2 * si + 2)) % M; 
} 

void updateValueUtil(int* st, int ss, int se, int i, int diff, int si) 
{ 
    if (i < ss || i > se) 
        return; 
  
    st[si] = st[si] + diff; 
    if (se != ss) { 
        int mid = getMid(ss, se); 
        updateValueUtil(st, ss, mid, i, diff, 2 * si + 1); 
        updateValueUtil(st, mid + 1, se, i, diff, 2 * si + 2); 
    } 
} 
  
void updateValue(int arr[], int* st, int n, int i, int new_val) 
{ 
    if (i < 0 || i > n - 1) { 
        cout << "Invalid Input"; 
        return; 
    } 
    int diff = new_val - arr[i]; 
  
    arr[i] = new_val; 
    updateValueUtil(st, 0, n - 1, i, diff, 0); 
} 
  
int getGcd(int* st, int n, int qs, int qe) 
{ 
    if (qs < 0 || qe > n - 1 || qs > qe) { 
        cout << "Invalid Input"; 
        return -1; 
    } 
  
    return getGcdUtil(st, 0, n - 1, qs, qe, 0); 
} 

int constructGcdUtil(int arr[], int ss, int se, int* st, int si) 
{ 
    if (ss == se) { 
        st[si] = arr[ss]; 
        return arr[ss]; 
    } 
    int mid = getMid(ss, se); 
    st[si] = __gcd(constructGcdUtil(arr, ss, mid, st, si * 2 + 1), 
                   constructGcdUtil(arr, mid + 1, se, st, si * 2 + 2)) % M; 
    return st[si]; 
} 

int* constructGcd(int arr[], int n) 
{ 
    int x = (int)(ceil(log2(n))); 
    int max_size = 2 * (int)pow(2, x) - 1; 

    int* st = new int[max_size]; 
    constructGcdUtil(arr, 0, n - 1, st, 0); 
    return st; 
} 

void solve(){
    
    int n, q;
    cin >> n >> q;
    
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int* st = constructGcd(ar, n); 
    
    int k = q;
    
    while(k--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        int x = (ar[l] * r) % M;
        updateValue(ar, st, n, l, x); 
        int* st = constructGcd(ar, n); 
        cout << getGcd(st, n, 0, n - 1) << "\n"; 
        
    }
    
    
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