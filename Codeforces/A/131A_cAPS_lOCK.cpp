#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	bool check = true;
	for (int i=0; i<s.size(); i++){
		if (s[i] != toupper(s[i])){
			check = false;
			break;
		}	
	}
	if (check){
		for (int i=0; i<s.size(); i++)  s[i] = tolower(s[i]);
		cout<<s;
		return 0;
	}
	bool check2 = true;
	if (s[0] == tolower(s[0])){
		for (int i=1; i<s.size(); i++){
			if (s[i] != toupper(s[i])){
				check2=false;
				break;
			} 
		}
		if (check2){
			s[0] = toupper(s[0]);
			for (int i=1; i<s.size(); i++)  s[i] = tolower(s[i]);
			cout<<s;
		}
		else cout<<s; 
	}
	else cout<<s;	
	
}