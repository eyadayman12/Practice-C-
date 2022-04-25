#include <bits/stdc++.h>

using namespace std;

#define ll			long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,n;
		cin>>a>>b>>c>>n;
		int arr[3] = {a,b,c};
		sort(arr, arr+3);
		ll cnt = 2*arr[2]-arr[1]-arr[0];
		if (n<cnt) cout<<"NO"<<endl;
		else cout<<((n-cnt)%3==0 ? "YES":"NO")<<endl;
		
	}
}