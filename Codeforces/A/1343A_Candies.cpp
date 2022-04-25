#include <bits/stdc++.h>

using namespace std;

#define ll		long long
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll k =1;
		for (int i=1; i<=n; i++){
			k = 2*k+1;
			if (n%k) continue;
			else {
				cout<<n/k<<endl; break;}			
		}
	}
}