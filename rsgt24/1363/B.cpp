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

bool isSubSequence(string str1, string str2, int m, int n) 
{ 
    // Base Cases 
    if (m == 0) return true; 
    if (n == 0) return false; 
  
    // If last characters of two strings are matching 
    if (str1[m-1] == str2[n-1]) 
        return isSubSequence(str1, str2, m-1, n-1); 
  
    // If last characters are not matching 
    return isSubSequence(str1, str2, m, n-1); 
} 

int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        string x;
        cin>>x;
        //regex b("101");
        //regex c("010");
        string str1 = x; 
        string str2 = "101"; 
        string str3 = "010"; 
        int m = str1.size(); 
        int n = str2.size();
        int k = str3.size();
        bool check=false;
        int count1=0,count0=0;
        for(int i=0;i<x.size();i++)
        {
            if(x[i]=='0')
            count0++;
            else
            count1++;
        }
        //cout<<count1<<" "<<count0<<"\n";
        //if(regex_match(x, b)||regex_match(x, c))
        if(isSubSequence(str2, str1, n, m)||isSubSequence(str3, str1, k, m))
        {
            check=true;
        }
        if(!check)
        {
            cout<<0<<"\n";
        }
        else if(count1<count0)
        {
            int count=0;
            for(int i=0;i<m;i++)
            {
                if(x[i]=='1')
                {
                    x[i]='0';
                    count++;
                }
                //cout<<x<<"\n";
                if(isSubSequence(str2, x, n, m)||isSubSequence(str3, x, k, m))
                {
                    //count++;
                    continue;
                }
                else
                break;
            }
            cout<<count<<"\n";
        }
        else
        {
            int count=0;
            for(int i=0;i<m;i++)
            {
                if(x[i]=='0')
                {
                    x[i]='1';
                    count++;
                }
                //cout<<x<<"\n";
                if(isSubSequence(str2, x, n, m)||isSubSequence(str3, x, k, m))
                {
                    //count++;
                    continue;
                }
                else
                break;
            }
            cout<<count<<"\n";
        }
        
    }
    return 0;
}