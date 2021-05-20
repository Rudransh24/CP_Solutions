//Show them your progress.....

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

/*void sieveOfEratosthenes(int N, int s[]) 
{ 
    // Create a boolean array "prime[0..n]" and 
    // initialize all entries in it as false. 
    vector <bool> prime(N+1, false); 
  
    // Initializing smallest factor equal to 2 
    // for all the even numbers 
    for (int i=2; i<=N; i+=2) 
        s[i] = 2; 
  
    // For odd numbers less then equal to n 
    for (int i=3; i<=N; i+=2) 
    { 
        if (prime[i] == false) 
        { 
            // s(i) for a prime is the number itself 
            s[i] = i; 
  
            // For all multiples of current prime number 
            for (int j=i; j*i<=N; j+=2) 
            { 
                if (prime[i*j] == false) 
                { 
                    prime[i*j] = true; 
  
                    // i is the smallest prime factor for 
                    // number "i*j". 
                    s[i*j] = i; 
                } 
            } 
        } 
    } 
} 
  
pair<int, int> generatePrimeFactors(int N) 
{ 
    int s[N+1]; 
    sieveOfEratosthenes(N, s); 
    vector<pair<int, int>> vp;
    int curr = s[N]; 
    int cnt = 1; 
    while (N > 1) 
    { 
        N /= s[N]; 
        if (curr == s[N]) 
        { 
            cnt++; 
            continue; 
        } 
  
        vp.pb({cnt, curr}); 
        curr = s[N]; 
        cnt = 1; 
    } 
    
    sort(vp.begin(), vp.end());
    
    return {vp[0].first, vp[0].second};
}*/

map<int, int> mp;

void primeFactors(int n)  
{  
    while (n % 2 == 0)  
    {  
        mp[2]++; 
        n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            mp[i]++;
            n = n/i;  
        }  
    }  
    if (n > 2)  
        mp[n]++;  
}  

void solve(){
   
    mp.clear();
    int n;
    cin >> n;
    primeFactors(n);
    //pair<int, int> x = generatePrimeFactors(n); 
    
    int x, y, maxx = INT_MIN;
    for(auto i: mp)
    {
        y = i.second;
        maxx = max(maxx, y);
    }
    
    for(auto i: mp)
    {
        if(maxx == i.second)
        {
            x = i.first;
            y = i.second;
        }
    }
    int ans = 1;
    for(auto i: mp)
    {
        int z = 1;
        if((i.first) != x)
        {
            int k = i.second;
            int kk = i.first;
            for(int i = 0; i < k; i++)
            z *= kk;
            
            ans = ans * z;
        }
    }
    
    cout << y << "\n";
    for(int i = 0; i < y - 1; i++)
    {
        cout << x << " ";
    }
    
    cout << ans * x << "\n";

}

int32_t main() {
	
	selena
	//int jj = 1;
	int tc = 1;
	cin >> tc;
	while(tc--){
	    //out << "Case #" << jj << ": ";
	    solve();
	    //jj++;
	}
	return 0;
}