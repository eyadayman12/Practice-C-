#include <bits/stdc++.h>

using namespace std;


int main(){
	char arr[4] = {'H', 'Q', '9'};
	string s;
	cin>>s;
	bool check = false;
	for (int i=0; i<s.size(); i++){
		for (int j=0; j<3; j++){
			if (s[i] == arr[j]){
				check = true;
				break;
			}
		}
		if (check) break;
	}
	cout<<(check ? "YES":"NO");
}                            