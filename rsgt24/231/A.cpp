#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int MAX = 1e5 + 5;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define d(x) cout<<x<<"\n"
#define time_passed 1.0 * clock() / CLOCKS_PER_SEC

int ans = 0;//ans tells us how many problems out of t they will be able to solve.

void solve()
{
  int a, b, c; //a: Petya, b: Vasya, c: Tonya
  cin >> a >> b >> c;//1: sure, 0: not sure
  //if the final count of sure answers is greater than or equal to 2 that means either of the 2/3 people 
  //are sure about the answer. they will be able to implement the solution.
  int count = 0;
  if (a == 1)
    count++;
  if (b == 1)
    count++;
  if (c == 1)
    count++;
  //final ans++ if more than 1 people are sure of the answer.
  if (count >= 2)
    ans++;
}

int32_t main()
{
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
  fastio
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  cout << ans << "\n";
  cerr << "Time elapsed : " << time_passed << "\n";
  return 0;
}