#include <bits/stdc++.h>

using namespace std;

#define test   int t;cin>>t;while(t--)
#define ll long long

int main(){
	test{
		ll n,k;
		cin>>n>>k;
		ll arr[n];
		ll temp[n];
		for (int i=0; i<n; i++) cin>>arr[i];
		ll d=arr[0];
		for (int i=0; i<n; i++){
			if (arr[i] > d) d=arr[i];
		}
		for (int i=0; i<n; i++){
			arr[i] = d-arr[i];
			temp[i] = arr[i];
		}
		if (k%2!=0){
			for (int i=0; i<n; i++) cout<<arr[i]<<" ";
		}
		else {
			sort(temp, temp+n, greater<ll>());
			d = temp[0];
			for (int i=0; i<n; i++){
				arr[i] = d-arr[i];
				cout<<arr[i]<<" ";
			}
		}
		cout<<endl;	
	}		
}