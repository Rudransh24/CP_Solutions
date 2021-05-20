/******

AUTHOR : RUDRANSH TRIPATHI, IIIT NAGPUR, CCID(rt24) & CFID(rsgt24)

MOTTO : Use criticism as fuel and you will never run out of energy.
        AIM : TO BECOME A BETTER CODER
        INTROSPECT + COURSE CORRECTIONS = CATALYST FOR SUCCESS
        Every moment is an opportunity to better yourself
        
*******/

#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int unsigned long long int
#define pb push_back
#define mp make_pair
#define d(x) cout<<x<<"\n"

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

bool areEqual(int arr1[], int arr2[], int n, int m) 
{ 
    if (n != m) 
        return false; 

    unordered_map<int, int> mp; 
    for (int i = 0; i < n; i++) 
        mp[arr1[i]]++; 
 
    for (int i = 0; i < n; i++) { 
        
        if (mp.find(arr2[i]) == mp.end()) 
            return false;
        if (mp[arr2[i]] == 0) 
            return false; 
  
        mp[arr2[i]]--; 
    } 
  
    return true; 
}  
int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int temp[n];
        int count=0;
        for(int i=1;i<=1024;i++)
        {
            
            for(int j=0;j<n;j++)
            {
                temp[j]=ar[j]^i;
            }
            sort(temp,temp+n);
            if(areEqual(ar,temp,n,n))
            {
                count=i;
                break;
            }
        }
        if(count==0)
        cout<<-1<<"\n";
        else
        cout<<count<<"\n";
        
    }
    return 0;
}