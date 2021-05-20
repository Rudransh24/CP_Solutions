#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed	1.0 * clock() / CLOCKS_PER_SEC

void solve()
{
    int n,k;
    cin>>n>>k;
    string x;
    cin>>x;
    
    int c = 0;
    int initial = 0;
    int cl = 0;
    int initialw = 0;
    
    for(int i=0;i<n;i++)
    {
        if(x[i]=='W'&&i==0)
        {
            initial++;
            c++;
        }
        else if(x[i]=='W'&&x[i-1]=='W')
        {
            initial+=2;
            c+=2;
        }
        else if(x[i]=='W'&&x[i-1]!='W')
        {
            initial++;
            c++;
        }
        else
        cl++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(x[i]=='W')
        {
            initialw=i;
            break;
        }
    }

    //cout<<initial<<" ";
    //cout<<cl<<"\n";
    k = min(k,cl);
    if(cl==n)
    {
        if((2*k-1)>=0)
        cout<<2*(k)-1<<"\n";
        else
        cout<<0<<"\n";
    }
    else
    {
        //go through the W consecutive indices.
        //basiclly checking L subsegemts range indices
        vector<int> check;
        
        int iw = initialw;
        
        for(int i=iw+1;i<n;i++)
        {
            if(x[i]=='L')
            continue;
            else
            {
                if((i-iw-1)!=0)
                check.pb(i-iw-1);
                
                iw=i;
            }
        }
        
        sort(check.begin(),check.end());
        
        for(int i=0;i<check.size();i++)
        {
            if(check[i]>k)
            {
                c+=2*k;
                k = 0;
                break;
            }
            else
            {
                c+=(2*check[i])+1;
                k-=check[i];
            }
            
        }
        
        if(k)
        {
            c+=2*k;
        }
        
        cout<<c<<"\n";
        
    }
    
}


int32_t main(void)
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	cerr << "\n" << "Time elapsed : " << time_passed << "\n";
	return 0;
}