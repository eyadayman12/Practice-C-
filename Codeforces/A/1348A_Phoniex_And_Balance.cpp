#include <bits/stdc++.h>

using namespace std;
#define ll    long long
int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		ll a = pow(2,n);
		ll b=0;
		ll d = n/2;
		for (int i=1; i<n; i++){
			if (i < d) a+=pow(2,i);
			else  b+=pow(2,i);
		}
		cout<< abs(a-b)<<endl;
	}
}