#include <bits/stdc++.h>

using namespace std;
#define ll	long long


ll sumOfDigits(ll n){
	ll sum = 0;
	while(n){
		int n1 = n%10;
		sum+=n1;
		n/=10;
	}
	return sum;
}

ll gcd (ll a, ll b){
	if (b==0) return a;
	return gcd(b, a%b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll SD = sumOfDigits(n);
		ll g = gcd(n,SD);
		while(g==1){
			n++;
			SD = sumOfDigits(n);
			g = gcd(n,SD);
		}
		cout<<n<<"\n";
		
	}
}