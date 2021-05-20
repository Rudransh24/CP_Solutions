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

vector<int> global;
set<int> globa;
pair<int,int> glob;
map<int,int> glo;


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
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        
        string temp="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx";
        string x=temp;
        reverse(x.begin(),x.end());
        
        cout<<temp<<"\n";
        string cont=temp;
        string store="";
        int check=0;
        for(int i=0;i<n;i++)
        {   
            store="";
            if(i==0)
            {
                
            if(ar[i]==0)
            {
                reverse(cont.begin(),cont.end());
                cout<<cont<<"\n";
            }
            else
            {
            for(int j=0;j<ar[i];j++)
            {
                cout<<cont[j];
                store+=cont[j];
            }                
            cout<<temp;
            cont=store+temp;
            cout<<"\n";
            }
            }
            else
            {
                
                if(ar[i]<ar[i-1]&&ar[i]!=0)
                {
                for(int j=0;j<ar[i];j++)
                {
                    cout<<cont[j];
                    store+=cont[j];
                }    
                reverse(cont.begin(),cont.end());
                cout<<cont;
                cont=store+cont;
                cout<<"\n";
                }
                else if(ar[i]>=ar[i-1]&&ar[i]!=0)
                {
                for(int j=0;j<ar[i];j++)
                {
                    cout<<cont[j];
                    store+=cont[j];
                }    
                //reverse(cont.begin(),cont.end());
                cout<<cont;
                cont=store+cont;
                cout<<"\n";
                }
                else
                {
                    if(check%2==0)
                    cont+="new";
                    else
                    cont+="old";
                    check++;
                    reverse(cont.begin(),cont.end());
                    cout<<cont<<"\n";
                }
            }
        }
        
        
        
    }
    return 0;
}