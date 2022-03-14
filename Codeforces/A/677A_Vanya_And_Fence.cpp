#include <bits/stdc++.h>

using namespace std;

int main(){

	int n,h;
	cin>>n>>h;
	int min_width = 0;
	while (n--){
		int a;
		cin>>a;
		if (a<=h) min_width++;
		else min_width+=2;
	}
	cout<<min_width;
}