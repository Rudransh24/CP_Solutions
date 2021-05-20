#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        
        int ar[n];
        for(int i = 0; i < n; i++){
            cin >> ar[i];
        }
        
        int count = 1;
        int cnt1 = 1;
        int cnt2 = 1;
        for(int i = 2; i < n; i++){
            
            if(ar[i] < ar[i - 1]){
                
                
                cnt1--;
                
                if(cnt1 == 0){
                   
                   count++; 
                   cnt1 = cnt2;
                }
                
            }
            else
            cnt2++;
        }
        
        cout << count << "\n";
    }
    
    return 0;
}