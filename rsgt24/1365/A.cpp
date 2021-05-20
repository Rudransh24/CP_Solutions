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

int glob=0;

int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a,b,k;
        cin>>n>>m;
        
        int ar[n][m];
        vector<int> v;
        set<int> s;
        map<int,int> mp;
        multiset<int> ms;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cin>>ar[i][j];
        }
        
        
        int count=0,cnt=0,sum=0,sum1=0,ce=0,co=0;
        string x="Ashish";
        
        for(int i=0;i<n;i++)
        {
            //int ll=0;
            for(int j=0;j<m;j++)
            {
                
                if(ar[i][j]==0)
                {
                    int flag=0,fl=0,last=0;
                    for(int k=0;k<m;k++)
                    {
                        //if(i!=k)
                        //{
                            if(ar[i][k]==1)
                            {
                                flag=1;
                                break;
                            }
                        //}
                    }
                    
                    for(int k=0;k<n;k++)
                    {
                        //if(j!=k)
                        //{
                            if(ar[k][j]==1)
                            {
                                fl=1;
                                break;
                            }
                        //}
                    }
                    if(fl==1||flag==1)
                    {
                        last=1;
                        continue;
                    }
                    else
                    {
                        ar[i][j]=1;
                        if(x=="Ashish")
                        x="Vivek";
                        else
                        x="Ashish";
                    }
                }
                else
                continue;
            }
        }
        
        if(x=="Ashish")
        cout<<"Vivek"<<"\n";
        else
        cout<<"Ashish"<<"\n";
        
        
    }
    return 0;
}