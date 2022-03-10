#include <bits/stdc++.h>

using namespace std;

int main(){              
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++) cin>>arr[i];
	sort(arr, arr+n);
	int my_coins = 0 , bro_coins = 0, min_coins = 0;
	for (int i=0; i<n; i++) bro_coins+=arr[i];
	for (int i=0; i<n; i++){
		my_coins += arr[i];
		bro_coins -= arr[i];
		min_coins++;
		if (my_coins > bro_coins) break;
	}
	cout<<min_coins;

}