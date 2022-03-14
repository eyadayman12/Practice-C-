#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	string ss;
	cin>>ss;
	for (int i=0; i<s.size(); i++){
		if (s[i] == '1' && ss[i] == '0') cout<<1;
		else if (s[i] == '0' && ss[i] == '1') cout<<1;
		else cout<<0;
	}
}