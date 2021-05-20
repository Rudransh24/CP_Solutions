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

int32_t main(void)
{
    fastio
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t=1;
    cin>>t;
    while(t--)
    {
        string x;
        cin>>x;
        vector<string> combo;
        int z=3;
        int h=3;
        set<char> s;
        
        for(auto it:x)
        {
            s.insert(it);
        }
        int count=0;
        for(auto it:s)
        {
            if(it=='1'||it=='2'||it=='3')
            count++;
        }
        if(count!=3)
        {
            cout<<0<<"\n";
            continue;
        }
        int min_1=INT_MAX;
        int ans;
        
        for(int g=0;g<x.size();g++)
        {
            int flag=0;
            for(int i=0;i<x.size();i++)
	        {	
	            int c1=0,c2=0,c3=0;
                int v=z+i;
		        for(int j=i;j<v&&j<x.size();j++)
		        {
		            if(x[j]=='1')
		            c1++;
		            else if(x[j]=='2')
		            c2++;
		            else if(x[j]=='3')
		            c3++;
		        }
		        //cout<<c1<<" "<<c2<<" "<<c3<<"\n";
		        ans=c1+c2+c3;
		        //cout<<ans<<"\n";
		        if(c1>=1&&c2>=1&&c3>=1)
		        {
		            min_1=min(min_1,ans);
		            flag=1;
		            break;
		        }
		        //z++;
		    
	        }
	        if(flag==1)
	        break;
	        
	        z=++h;
	        
        }
        
        cout<<min_1<<"\n";
        
        
    }
  
    return 0;
   
 }