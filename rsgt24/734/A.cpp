#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n;
          cin>>n;
          string x;
          cin>>x;
          int ca=0,cd=0;
          for(int i=0;i<n;i++)
          {
                    if(x[i]=='A')
                    ca++;
                    else
                    cd++;
          }
          if(ca>cd)
          cout<<"Anton"<<endl;
          else if(cd>ca)
          cout<<"Danik"<<endl;
          else
          cout<<"Friendship"<<endl;
          
          return 0;         
}