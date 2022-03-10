#include <bits\stdc++.h>

using namespace std;

int main(){
	int k,n,w;
	int price = 0;
	cin>>k>>n>>w;
	for (int i=1; i<=w; i++){
		price += i*k;	
	}
	cout<< (price > n ? (price - n) : 0);
}