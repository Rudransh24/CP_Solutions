#include<bits/stdc++.h>
using namespace std;
int main()
{
          string x;
          getline(cin,x);
          int n=x.size();
          //cout<<n<<endl;
          //cout<<x[x.size()-2]<<endl;
          
          for(int i=n-2;i>=0;i--)
          {
                    if(x[i]!=' ')
                    {
                              //cout<<x[i]<<endl;
                              if(x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U'||x[i]=='Y'||x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'||x[i]=='y')
                              cout<<"YES"<<endl;
                              else
                              cout<<"NO"<<endl;
                              
                              break;
                    }
                    else
                    continue;
                    
          }
          return 0;         
}