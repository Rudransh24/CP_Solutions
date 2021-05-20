#include<bits/stdc++.h>
using namespace std;

void solve()
{
	//input 2 integers n and k
	//where n is a number
	//k is the no. of subtractions
	int n, k;
	cin >> n >> k;
	//this question having lower contraints can be done 
	//using brute - force
	//for k subtractions
	
	while (k--)
	{
		if (n % 10 == 0)
		{
			n = n / 10;
			//if last digit is zero i.e n % 10 == 0, divide the number by 10
			//in other words delete the last digit.
		}
		else
		{
			n--;
			//else
			//decrease the number by unity.
		}
	}

	//print the given n after doing k operations on it.
	cout << n << "\n";
}
int main()
{
	int t = 1;
	while (t--)
	{
		solve();
	}
	return 0;
}