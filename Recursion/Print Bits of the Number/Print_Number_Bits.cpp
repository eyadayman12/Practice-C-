#include <bits/stdc++.h>

using namespace std;

#define ll			long long

void printBitsOfTheNumber(ll number){
	if (number){
		printBitsOfTheNumber(number/2);
		cout<<number%2;
	}
}
int main(){
	ll number;
	cin>>number;
	printBitsOfTheNumber(number);	
}