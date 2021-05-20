#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n;
          cin>>n;
          int ar[n+1];
          for(int i=1;i<n+1;i++)
          {
                    cin>>ar[i];
          }
          int a=0,b=0,c=0;
          for(int i=1;i<n+1;i+=3)
          {
                  a+=ar[i];  
          }
          for(int i=2;i<n+1;i+=3)
          {
                  b+=ar[i];  
          }
          for(int i=3;i<n+1;i+=3)
          {
                  c+=ar[i];  
          }
          
          if(max({a,b,c})==a)
          cout<<"chest"<<endl;
          else if(max({a,b,c})==b)
          cout<<"biceps"<<endl;
          else
          cout<<"back"<<endl;
          return 0;         
}