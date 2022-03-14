#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	bool isEasy = true;
	for (int i=0; i<n; i++){
		if (arr[i] == 1) {
			isEasy = false;
			break;
		}
	}
	cout<<(isEasy ? "EASY":"HARD");
}