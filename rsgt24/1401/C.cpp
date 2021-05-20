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

/*

//Find all paths from a to b in an undirected graph
vector<int> g[100000];
int visited[100000];
 //count of all the paths from 1 to n;
vector<string> ans;

void dfs(int visited[10000],int u,int v,vector<int> path)
{
    visited[u]=1;
    if(u==v)
    {
        string temp="";
        for(int i=0;i<path.size();i++)
        {
            temp+=to_string(path[i]);
        }
        ans.pb(temp);
    }
    else
    {
        for(int i=0;i<g[u].size();i++)
        {
            int y=g[u][i];

            if(visited[y]==0)
            {
                visited[y]=1;
                path.pb(y);
                dfs(visited,y,v,path);
                path.pop_back();
            }

        }
    }

    visited[u]=0;

}
*/

void solve()
{
    int n;
    cin>>n;
    int ar[n];
    int min_1=1e10;
    int ar1[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        ar1[i]=ar[i];
        min_1=min(ar[i],min_1);
    }
    
    
    if(n==1)
    cout<<"YES"<<"\n";
    else
    {
        if(is_sorted(ar,ar+n))
        cout<<"YES"<<"\n";
        else
        {
            sort(ar,ar+n);
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                if((ar[i]%(min_1))!=0&&ar[i]!=ar1[i])//not a multiple
                {
                    cnt=1;
                    break;
                }
            }
            
            if(cnt)
            cout<<"NO"<<"\n";
            else
            cout<<"YES"<<"\n";
            
        }
    }
}

int32_t main(void)
{
    fastio
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();   
    }
    return 0;
}