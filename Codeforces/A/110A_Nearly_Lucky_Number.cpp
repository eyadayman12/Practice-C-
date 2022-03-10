#include <bits/stdc++.h>

using namespace std;

int main(){

	string s;
	cin>>s;
	int n=s.size(); int count = 0;
	if (s=="7" || s=="4") cout<<"NO";
	else{
	for (int i=0; i<n; i++){
		if (s[i] == '4' || s[i] == '7') count++;
	}
	cout<<(count == 4 || count == 7 ? "YES":"NO");
	}
	
}