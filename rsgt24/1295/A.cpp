#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(void)
{
	int t;
	cin>>t;
	while(t--)
	{	
		int n;
		cin>>n;
		int ar[n/2];
		if(n%2==0)
		{
		    for(int i=0;i<n/2;i++)
		    ar[i]=1;
		}
		else
		{
		    for(int i=0;i<n/2;i++)
		    {
		        if(i==0)
		        ar[i]=7;
		        else
		        ar[i]=1;
		    }
		    
		}
		
		for(int i=0;i<n/2;i++)
		cout<<ar[i];
		
		cout<<endl;
	}		
	
	return 0;
}