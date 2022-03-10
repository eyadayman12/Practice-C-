#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, b="hello";
	int j=0, hello=0;
	cin>>s;
	for (int i=0; i<s.size(); i++){
		if (s[i] == b[j]){
		     hello++;
		     j++;
		     if (hello == 5) break;
		}
	}
	cout<<(hello == 5 ? "YES":"NO");                    
}