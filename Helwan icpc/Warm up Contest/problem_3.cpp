/**
 * Problem Describtion:
 * Vasiliy likes to rest after a hard work, so you may often meet him in some bar nearby. 
 * As all programmers do, he loves the famous drink "Beecola", which can be bought in n different shops in the city. 
 * It's known that the price of one bottle in the shop i is equal to xi coins.
 * Vasiliy plans to buy his favorite drink for q consecutive days. 
 * He knows, that on the i-th day he will be able to spent mi coins. 
 * Now, for each of the days he want to know in how many different shops he can buy a bottle of "Beecola".
 */

/// Solution:

#include <bits/stdc++.h>

using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int arr[100001];

int main()
{
	fast;

	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);

	int q; 
	cin >> q;
	int t;
	while (q--)
	{
		cin >> t;
		cout << upper_bound(arr, arr + n, t) - arr << endl;
	}
}