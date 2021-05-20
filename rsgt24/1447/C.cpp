//now if i add something in sorted order i must remove it if somehow it gets greater than w so as to get a perfect answer
//in added in sorted order so i must remove in sorted order too.
//Show them your PROGRESS

//if i remove in sorted order
//first count gets removed
//now my asnwer becomes whole array size - count


#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
const int M = 1e9 + 7;
const int MAX = 2e6 + 2;
#define selena ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    
    int n, w;
    cin >> n >> w;
    int temp = w;
    
    int ar[n];
    vector<pair<int, int>> vp;
    int min_1 = INT_MAX;
    int ff = 0;
    int ass;
    
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        min_1 = min(min_1, ar[i]);
        if(ar[i] == w)
        {
            ff = 1;
            ass = i + 1;
        }
        vp.pb({ar[i], i + 1});
    }
    
    //common sense chutiye
    if(min_1 > w)
    {
        //cout << "lol" << "\n";
        cout << -1 << "\n";
        return;
    }
    
    if(ff == 1)
    {
        cout << 1 << "\n" << ass << "\n";
        return;
    }
    
    
    //lets try decreasing 
    sort(vp.begin(), vp.end(), greater<pair<int, int>>());
    int sum = 0;
    int count = 0;
    int g = 0;
    vector<int> ans;

    int temp1 = ceil((double)w/2);
    
    for(int i = 0; i < n; i++)
    {
        sum += vp[i].first;
        if(sum > temp)
        {
            sum -= vp[i].first;
            continue;
        }
        //this for direct sums
        //if i get this condition i must remove
        //other wise the sum got greater and now 
        //i have to decrease the sum.
        ans.pb(vp[i].second);
        if(temp1 <= sum && sum <= temp)
        {
            g = 1;
            break;
        }
        
        
    }
    
    if(g == 0)
    cout << -1 << "\n";
    else
    {
        //this count refers to the elements that i just remove 
        //in order to get a perfect answer?.
        cout << ans.size() << "\n";
        for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
        cout << "\n";
    }
    
    
    
}

int32_t main() {
	
	selena
	int tc = 1;
	cin >> tc;
	while(tc--){
	    solve();
	}
	return 0;
}