#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back

int32_t main()
{
    fastio
    int n;
    cin>>n;
    
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    int count[3]={0};
    
    for(int i=0;i<n;i++)
    {
       count[ar[i]-1]++;
    }
    
    int *min_1=min_element(count,count+3);
    
    if(*min_1==0)
    cout<<0<<"\n";
    else
    {
        int z=*min_1;
        cout<<*min_1<<"\n";
        
        for(int i=0;i<z;i++)
        {
            int k=0;
            int j=1;
            for(int m=0;m<n&&k<3;)
            {
                if(ar[m]==j)
                {
                    ar[m]=0;
                    cout<<m+1<<" ";
                    j++;
                    k++;
                    m=0;
                }
                else
                {
                    m++;
                }
                
            }
            cout<<"\n";
        }
    }
    
    
    
    
    
    
    return 0;
}