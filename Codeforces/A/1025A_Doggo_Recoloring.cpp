#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	sort(s.begin(), s.end());
	bool isRecolor = false;
	if (n==1) isRecolor=true;
	else{
		for (int i=0; i<n; i++){
			if (s[i] == s[i+1]) isRecolor=true;
		} 
	}
	cout<<(isRecolor ? "Yes":"No");
}