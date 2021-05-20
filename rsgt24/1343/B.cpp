//bhai isko krne mai bahut time waste kardiya 

/******

AUTHOR : RUDRANSH TRIPATHI, IIIT NAGPUR, CCID(rt24) & CFID(rsgt24)

MOTTO : Use criticism as fuel and you will never run out of energy.
        AIM : TO BECOME A BETTER CODER
        INTROSPECT + COURSE CORRECTIONS = CATALYST FOR SUCCESS
        Every moment is an opportunity to better yourself
        
*******/

#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int unsigned long long int
#define pb push_back
#define mp make_pair
#define d(x) cout<<x<<"\n"

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

/*int powermod(int A, int p, int MOD = mod){
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

int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k=2,l=1;
        int count=0;
        int oddsum=0;
        if((n-2)%4==0)
        cout<<"NO"<<"\n";
        else
        {
            cout<<"YES\n";
            for(int i=0;i<n/2;i++)
            {
                cout<<k<<" ";
                count+=k;
                k+=2;
            }
            for(int i=0;i<n/2;i++)
            {
                if(i==n/2-1)
                {
                    cout<<count-oddsum<<" ";
                }
                else
                {
                    cout<<l<<" ";
                    oddsum+=l;
                    l+=2;
                }
                
            }
            //d(oddsum);
            
            cout<<"\n";
        }
    }
    
    
    return 0;
    
}