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

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

/*int powermod(int A, int p, int MOD = M){
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

int LongestMountain(vector<int>& a) 
{ 
	int i = 0, j = -1, 
		k = -1, p = 0, 
		d = 0, n = 0; 
	if (a.size() < 3) { 
		return 0; 
	} 

	for (i = 0; i < a.size() - 1; i++) { 

		if (a[i + 1] > a[i]) { 
			if (k != -1) { 
				k = -1; 
				j = -1; 
			} 
			if (j == -1) { 
				j = i; 
			} 
		} 
		else { 
			if (a[i + 1] <= a[i]) { 
				if (j != -1) { 
					k = i + 1; 
				} 
				if (k != -1 && j != -1) { 

					if (d <= k - j + 1) { 
						d = k - j + 1; 
					} 
				} 
			} 
		} 
	} 
	if (k != -1 && j != -1) { 
		if (d <= k - j + 1) { 
			d = k - j + 1; 
		} 
	} 
	return d; 
} 

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
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            v.pb(ar[i]);
        }
        
        if(is_sorted(ar,ar+n))
        {
            cout<<0<<"\n";
        }
        else
        {
           int x=LongestMountain(v);
           if(x==0)
           {
                int count=0;
                for(int i=0;i<n-1;i++)
                {
                    if(ar[i]<=ar[i+1])
                    count++;
                }
                //cout<<count<<"\n";
                if(count==0)
                cout<<0<<"\n";
                else
                cout<<n-(count+1)<<"\n";
           }
           else
           cout<<n-x<<"\n";
        }
    }
    
    return 0;
}