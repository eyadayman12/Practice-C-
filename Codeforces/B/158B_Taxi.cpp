#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int s;
	int arr[5]={0};
	while(n--){
		cin>>s;
		arr[s] += 1;
	}
	int total =  arr[2]/2 + arr[3] + arr[4];
	arr[1] -= arr[3];
	if (arr[2] % 2 == 1){
		total+=1;
		arr[1]-=2;
	}
	if (arr[1] > 0) total += (arr[1] + 3 ) / 4;
	cout<<total;

}
