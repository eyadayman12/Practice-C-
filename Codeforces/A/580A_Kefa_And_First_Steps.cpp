#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int count = 1;
	int ma = 1;
	for (int i=0; i<n; i++) cin>>arr[i];
	for (int i=0; i<n-1; i++){
		if (arr[i] <= arr[i+1]) count++;
		else count = 1;
		ma = max(ma, count);
	}
	cout<<ma;
}