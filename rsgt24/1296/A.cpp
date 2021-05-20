#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        int counteven=0,countodd=0;
        int oddsum=0,evensum=0;
        int sum=0;
        for(int i=0;i<n;i++)
        sum+=ar[i];
        if(sum%2!=0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            if(ar[i]%2!=0)
            countodd++;
            else
            counteven++;
        }
        if(counteven==n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(countodd==n&&n%2==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        cout<<"YES"<<endl;

    }
    return 0;
}