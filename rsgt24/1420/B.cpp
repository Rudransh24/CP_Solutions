#ifndef ONLINE_JUDGE
	#include "debug.cpp"
#endif

#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define ar array

void solve(){
	int n;
	cin >> n;
	vector<int> arr;
	map<int,vector<int>> maps;
	for(int i = 0;i < n; i++){
	          
	          int x;
	          cin>>x;
		maps[log2(x)].push_back(x);
	}
	int cnt = 0;
	for(auto itr : maps){
		//cout << itr.first << " " << itr.second.size() << "\n";
			cnt += (itr.second.size()*(itr.second.size()-1))/2;
	}
	cout << cnt << "\n";
}


int32_t main()
{

	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int tc = 1;
	cin >> tc;
	while(tc--){
		solve();
	}

	return 0;
}