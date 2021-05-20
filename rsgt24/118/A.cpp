#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long

int32_t main(void)
{
        
                   string x;
                   cin>>x;
                   string z="";
                   string y="";
                   for(int i=0;i<x.size();i++)
                   if(z[i]=='a'||z[i]=='A'||z[i]=='e'||z[i]=='E'||z[i]=='i'||z[i]=='I'||z[i]=='o'||z[i]=='O'||z[i]=='u'||z[i]=='U'||z[i]=='y'||z[i]=='Y')
                    continue;
                    else
                    z+=x[i];
                    
                    for(int i=0;i<z.size();i++)
                    if(z[i]=='a'||z[i]=='A'||z[i]=='e'||z[i]=='E'||z[i]=='i'||z[i]=='I'||z[i]=='o'||z[i]=='O'||z[i]=='u'||z[i]=='U'||z[i]=='y'||z[i]=='Y')
                    continue;
                    else
                    y=y+'.'+z[i];
                    
                    for(int i=0;i<y.size();i++)
                    if(isupper(y[i]))
                    y[i]=tolower(y[i]);
                    
                    cout<<y<<endl;
                    
                    
    return 0;
}