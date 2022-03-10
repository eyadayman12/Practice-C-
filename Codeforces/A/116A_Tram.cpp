#include <bits/stdc++.h>

using namespace std;

int main(){

	int n,a,b;
	cin>>n;
	cin>>a>>b;
	int p = b, c = b;
	while (n-- > 1){
		cin>>a>>b;
		p = (p-a) + b;
		if (p>c) c=p;
	}
	cout<<c;
}