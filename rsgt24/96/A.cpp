#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long

int32_t main(void)
{
        
                  string x;
                  cin>>x;
                  int count0=0,count1=0;
                  size_t found=x.find("0000000");
                  if(found!=string::npos)
                  {cout<<"YES";
                  exit(0);}
                  size_t found1=x.find("1111111");
                  if(found1!=string::npos)
                  {cout<<"YES";
                  exit(0);}
                  cout<<"NO"<<endl;
           return 0;
}