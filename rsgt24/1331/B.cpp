#include<bits/stdc++.h>
//include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
using namespace std;
#define int int64_t

int32_t main()
{
         int n;
         cin>>n;
         for(int i=2;i<n;i++)
         {
                   if(n%i==0)
                   {          
                              cout<<i<<n/i<<endl;
                              break;
                   }

         }
          return 0;
}