#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++) cin>>arr[i];
	int even = 0, odd=0;
	int even_index = 0, odd_index = 0;
	for (int i=0; i<n; i++){
		if (arr[i] % 2 == 0) {
			even++;
			even_index = i+1;
		}
		else{
			odd++;
			odd_index = i+1;
		}	
	}
	if (even == 1) cout<<even_index;
	else if (odd == 1) cout<<odd_index;
}