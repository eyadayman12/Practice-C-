#include <bits/stdc++.h>

using namespace std;

void triangle(int length){
	if (length == 0) return;
	triangle(length-1);
	for (int i=1; i<=length; i++) cout<<"*";
	cout<<endl;
}
int main(){

	int triangleLength;
	cin>>triangleLength;
	triangle(triangleLength);
	
}