#include <bits/stdc++.h>

using namespace std;

#define ll 			long long

ll cnt=1;

void f3n_1(ll number){
	if (number == 1) return;
	cnt++;
	if (number % 2 == 0) return f3n_1(number/2);
	return f3n_1(3*number+1);
}
int main(){
	ll number;
	cin>>number;
	f3n_1(number);
	cout<<cnt;	
}