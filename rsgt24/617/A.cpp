#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n;
          cin>>n;
          //int ar[5]={5,4,3,2,1};
          int count=0;
          int rem;
          rem=n%5;
          count=(n-rem)/5;
          if(rem==0)
          cout<<count<<endl;
          else
          cout<<count+1<<endl;
          
          return 0;         
}