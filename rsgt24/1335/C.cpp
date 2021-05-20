#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int unsigned long long int

/*int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int powermod(int A, int p, int MOD = mod){
    A%=MOD;
    int res  = 1;
    while(p){
        if(p&1)
            res = ((__int128)res*A)%MOD;
        
        A = ((__int128)A*A)%MOD;
        p>>=1;
    }

    return res;
}*/

bool areDistinct(vector<int> arr) 
{ 
    int n = arr.size(); 
    unordered_set<int> s; 
    for (int i = 0; i < n; i++) { 
        s.insert(arr[i]); 
    } 
    return (s.size() == arr.size()); 
} 

int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n;
        int ar[n];
        vector<int> v;
        set<int> s;
        multiset<int> ms;
        int cnt[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            v.push_back(ar[i]);
            s.insert(ar[i]);
            cnt[ar[i]-1]++;
        }
        
        if(n==1)
        {
            cout<<"0"<<"\n";
            continue;
        }
        
        if(areDistinct(v))
        {
            cout<<"1"<<"\n";
            continue;
        }
        
        int *p=max_element(cnt,cnt+n);
        int z=*p;
        if(z==s.size())
        cout<<s.size()-1<<"\n";
        else
        if(s.size()>z)
        cout<<z<<"\n";
        else
        cout<<s.size()<<"\n";
        
        
    }
    return 0;
}