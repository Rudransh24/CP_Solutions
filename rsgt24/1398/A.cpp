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

/*
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int lcm(int a, int b)  
{  
    return (a*b)/gcd(a, b);  
}  
*/

/*
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
}
*/

/*
const int MAX = 100000; 
int prefix[MAX + 1]; 

void buildPrefix() 
{ 
	bool prime[MAX + 1]; 
	memset(prime, true, sizeof(prime)); 

	for (int p = 2; p * p <= MAX; p++) { 
		if (prime[p] == true) { 
			for (int i = p * 2; i <= MAX; i += p) 
				prime[i] = false; 
		} 
	} 
	prefix[0] = prefix[1] = 0; 
	for (int p = 2; p <= MAX; p++) { 
		prefix[p] = prefix[p - 1]; 
		if (prime[p]) 
			prefix[p]++; 
	} 
} 

int query(int L, int R) 
{ 
	return prefix[R] - prefix[L - 1]; 
}
*/

int32_t main(void)
{
    fastio
    int t=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        
        for(int i=0;i<n;i++)
        cin>>ar[i];
        
        int flag=0;
        
        //cout<<ar[0]+ar[1]<<"\n";
        for(int i=2;i<n;i++)
        {
            if((ar[0]+ar[1])<=ar[i])
            {
                cout<<1<<" "<<2<<" "<<i+1<<"\n";
                flag=1;
                break;
            }
        }
        
        if(flag==0)
        cout<<-1<<"\n";
    }
    return 0;
}