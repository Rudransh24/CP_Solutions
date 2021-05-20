#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,n;
		cin>>a>>b>>c>>n;
		if(n==0)
		{
		    if(a==b&&b==c)
		    cout<<"YES"<<endl;
		    else
		    cout<<"NO"<<endl;
		}
		int ar[3];
		ar[0]=a;
		ar[1]=b;
		ar[2]=c;
		int *z=max_element(ar,ar+3);
		int A=*z-a;
		int B=*z-b;
		int C=*z-c;
		n=n-A-B-C;
		if(n%3==0&&n>=0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;

}