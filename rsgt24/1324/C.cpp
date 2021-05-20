#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

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

int maxRepeating(string str) 
{ 
    int n = str.length(); 
    int count = 0; 
    char res = str[0]; 
    int cur_count = 1; 

    for (int i=0; i<n; i++) 
    { 

        if (i < n-1 && str[i] == str[i+1] && str[i]=='L') 
            cur_count++; 
        else
        { 
            if (cur_count > count) 
            { 
                count = cur_count; 
                res = str[i]; 
            } 
            cur_count = 1; 
        } 
    } 
  
    return count; 
} 
 
bool allCharactersSame(string s) 
{ 
    int n = s.length(); 
    if(n==1&&s[0]=='L')
    return false;
    
    for (int i = 1; i < n; i++) 
        if (s[i] != s[0]||s[i]=='L'||s[0]=='L') 
            return false; 
  
    return true; 
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
        if(allCharactersSame(x))
        cout<<"1"<<"\n";
        else
        cout<<maxRepeating(x)+1<<"\n";
    }
    return 0;
}