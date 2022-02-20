#include <bits/stdc++.h>

using namespace std;

int arr[100001];

int main()
{
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
