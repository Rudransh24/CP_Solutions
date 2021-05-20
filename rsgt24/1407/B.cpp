#include<bits/stdc++.h>
using namespace std;
#define GO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int
#define pb push_back

int32_t main(void)
{
	GO
	int t = 1;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ar[n];
		//int x=0,y=0;
		int max_1 = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
			max_1 = max(max_1, ar[i]);
		}

		int cnt;
		vector<int> check;
		sort(ar, ar + n, greater<int>());
		vector<int>::iterator it;
		cout << max_1 << " ";
		check.pb(max_1);
		for (int i = 2; i <= 1000; i++)
		{

			vector<int> v[1010];
			cnt = 0;
			for (int j = 0; j < n; j++)
			{
				if (find(check.begin(), check.end(), ar[j]) != check.end())
					continue;
				if (ar[j] == max_1 && cnt == 0)
				{
					cnt = 1;
					continue;
				}
				else
				{
					if (ar[j] % i == 0)
						v[i].pb(ar[j]);
				}
			}


			int pos = 0;
			int mm = INT_MIN;
			for (int i = 0; i < 1000; i++)
			{
				if (v[i].size() > mm)
				{
					pos = i;
					int jj = v[i].size();
					mm = max(mm, jj);
				}
			}

			//cout << mm << "\n";
			for (int i = 0; i < mm; i++)
			{
				cout << v[pos][i] << " ";
				check.pb(v[pos][i]);
			}

			for (int i = 0; i < 1000; i++)
				v[i].clear();

		}

		for (int j = 0; j < n; j++)
		{
			if (find(check.begin(), check.end(), ar[j]) != check.end())
				continue;
			else
				cout << ar[j] << " ";
		}

		cout << "\n";
	}
	return 0;
}