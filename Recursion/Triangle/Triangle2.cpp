#include <bits/stdc++.h>

using namespace std;

void triangle (int length){
	if (length == 0) return;
	for (int i=1; i<=length; i++) cout<<"*";
	cout<<endl;
	triangle(length-1);
}
int main(){
	int triangleLength;
	cin>>triangleLength;
	triangle(triangleLength);	
}