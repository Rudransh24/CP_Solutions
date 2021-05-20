#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int unsigned long long int
#define pb push_back
#define mp make_pair
#define d(x) cout<<x<<"\n"


int32_t main()
{
    fastio
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    char ar[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    int n;
    cin>>n;
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(k!=0&&k%4==0)
        {
            k=0;
            cout<<ar[k];
        }
        else
        {
            if(i==0)
            cout<<ar[k];
            else
            {
                cout<<ar[k];
            }
            
        }
        k++;
    }
    return 0;
}