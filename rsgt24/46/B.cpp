#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back
#define mp make_pair
#define d(x) cout<<x<<"\n"


int32_t main()
{
    fastio
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string z[5]={"S","M","L","XL","XXL"};
    
    vector<pair<string,int>> v;
    
    for(int i=0;i<5;i++)
    {
        int c;
        cin>>c;
        v.pb(mp(z[i],c));
    }
    
    
    
    int n;
    cin>>n;
    int a=n;
    
    
    
    string h[n];
    int l=0;
    while(a--)
    {
        string x;
        cin>>x;
        
        for(int i=0;i<5;i++)
        {
            int pos;
            int min_1=INT_MAX;
            if(v[i].first==x)
            {
                if(v[i].second==0)
                {
                    for(int j=0;j<5;j++)
                    {
                        if(v[j].second==0)
                        {
                            continue;
                        }
                        else
                        {
                            int g=abs(i-j);
                            if(min_1>=g)
                            {
                                pos=j;
                                min_1=g;
                            }
                            
                        }
                    }
                    h[l]=v[pos].first;
                    v[pos].second--;
                }
                else
                {
                    h[l]=v[i].first;
                    v[i].second--;
                }
            }
        }
        l++;
        
    }
    
    for(int i=0;i<l;i++)
    cout<<h[i]<<"\n";
    
    return 0;
}