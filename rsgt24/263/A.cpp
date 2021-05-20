#include<bits/stdc++.h>
using namespace std;

int main(void){
          int ar[5][5];
          for(int i=0;i<5;i++)
          for(int j=0;j<5;j++)
          cin>>ar[i][j];
          int x,y;
          if(ar[2][2]==1)
          {
                    cout<<"0"<<endl;
                    exit(0);
          }
          for(int i=0;i<5;i++)
          for(int j=0;j<5;j++)
          if(ar[i][j]==1)
          {
                    x=i;
                    y=j;
                    break;
          }
          cout<<abs(3-x-1)+abs(3-y-1)<<endl;
          return 0;
          
}