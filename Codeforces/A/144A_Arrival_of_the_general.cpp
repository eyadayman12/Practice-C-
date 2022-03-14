#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int maxValue = 0;
	int minValue = 100;
	int maxIndex = 0;
	int minIndex = 0;
	for (int i=0; i<n; i++){
		int x;
		cin>>x;
		if (x > maxValue){
			maxValue = x;
			maxIndex = i;
		}
		if (x <= minValue){
			minValue = x;
			minIndex = i;
		}
	}
	if (minIndex > maxIndex) cout<<(maxIndex - 1) + (n - minIndex);
	else cout<<(maxIndex - 1) + (n - minIndex)-1;                
}