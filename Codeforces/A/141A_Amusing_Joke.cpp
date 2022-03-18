#include <bits/stdc++.h>

using namespace std;

int main(){
	string s1, s2,s3;
	cin>>s1>>s2>>s3;
	string conc = s1+s2;
	sort(conc.begin(), conc.end());
	sort(s3.begin(), s3.end());
	cout<<(conc == s3 ? "YES":"NO"); 
}