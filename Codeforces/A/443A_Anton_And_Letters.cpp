#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	set<char>ch;
	for (int i=0; i<s.size(); i++){
		if (s[i] >= 'a' && s[i] <= 'z') ch.insert(s[i]);
	}
	cout<<ch.size();            
}