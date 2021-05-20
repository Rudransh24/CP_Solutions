#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
       int t;
       cin>>t;
       while(t--){
          ll a,b,c;
          cin>>a>>b>>c;
          ll sum=a+b+c;
          if(sum%9==0 && sum>0 && (int)(sum/9)<min({a,b,c}))
                cout<<"YES\n";
          else
                cout<<"NO\n";
       }
       
        
}