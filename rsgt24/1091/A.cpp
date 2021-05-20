#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(void)
{
          int ar[3];
          cin>>ar[0]>>ar[1]>>ar[2];
          ar[1]=ar[1]-1;
          ar[2]=ar[2]-2;
          sort(ar,ar+3);
          cout<<ar[0]+ar[0]+1+ar[0]+2<<endl;
          return 0;         
}