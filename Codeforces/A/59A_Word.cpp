#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	int upper=0, lower=0;
	for (int i=0; i<s.size(); i++){
		if (s[i] >= 'A' && s[i] <= 'Z') upper++;
		else lower++;
	}
	string new_s = "";
	if (upper > lower) {
		for (int i=0; i<s.size(); i++) new_s += toupper(s[i]);
	}
	else{
		for (int i=0; i<s.size(); i++) new_s+=tolower(s[i]);
	}
	cout<<new_s;
}