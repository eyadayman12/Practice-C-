#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++) cin>>arr[i];
		stack<int>s;
		int total=0, sum=0;
		for (int i=0; i<n; i++){
			if (arr[i] == 1){
				s.push(arr[i]);
				total+=sum;
				sum=0;
			}
			else{
	                	if(!s.empty()) sum++;
			}
		}
		cout<<total<<endl;
	}
}