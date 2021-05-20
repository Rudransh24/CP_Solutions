#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
 
/*int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
 
int powermod(int A, int p, int MOD = mod){
    A%=MOD;
    int res  = 1;
    while(p){
        if(p&1)
            res = ((__int128)res*A)%MOD;
        
        A = ((__int128)A*A)%MOD;
        p>>=1;
    }
 
    return res;
}*/
 
int32_t main(void)
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        int x,y,x1,y1,x2,y2;
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        
          if(a==b&&b==c&&c==d&&a==0&&x>=x1&&x<=x2&&y>=y1&&y<=y2)
        {
                  cout<<"YES"<<endl;
                  continue;
        }
        
        if((a==b&&b==0&&x<x1||x>x2)||(c==d&&c==0&&y<y1||y>y2))
        {
                  cout<<"NO"<<endl;
                  continue;
        }
 
        if(x==x1&&x1==x2&&(b!=0||a!=0)||y==y1&&y1==y2&&(d!=0||c!=0))
        {
                  cout<<"NO"<<endl;
                  continue;
        } 
        
        //int q=x+a-b;
        int w=x+b-a;
        //int e=y+c-d;
        int r=y+d-c;
        
        if(w>=x1&&w<=x2&&r>=y1&&r<=y2)
        {
                  cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
                  
        continue;
    }
    return 0;
}