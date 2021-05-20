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
#define int long long int
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

int findMaxGCD(int arr[], int n) 
{ 
    // Calculating MAX in array 
    int high = 0; 
    for (int i = 0; i < n; i++) 
        high = max(high, arr[i]); 
  
    // Maintaining count array 
    int count[high + 1] = {0}; 
    for (int i = 0; i < n; i++) 
        count[arr[i]]++; 
  
    // Variable to store the 
    // multiples of a number 
    int counter = 0; 
  
    // Iterating from MAX to 1 
    // GCD is always between 
    // MAX and 1. The first 
    // GCD found will be the 
    // highest as we are  
    // decrementing the potential 
    // GCD 
    for (int i = high; i >= 1; i--) 
    { 
        int j = i; 
       counter = 0; 
    
        // Iterating from current 
        // potential GCD 
        // till it is less than 
        // MAX 
        while (j <= high) 
        { 
            // A multiple found 
  
            if(count[j] >=2) 
               return j; 
  
           else if (count[j] == 1)          
                counter++;          
  
            // Incrementing potential 
            // GCD by itself 
            // To check i, 2i, 3i.... 
            j += i; 
  
            // 2 multiples found, 
            // max GCD found 
            if (counter == 2)          
                return i; 
        } 
    } 
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
        ar[i]=i+1;
        
        cout << findMaxGCD(ar, n)<<"\n"; 
        
    }
    return 0;
}