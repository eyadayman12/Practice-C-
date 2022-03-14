#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	int n;
	cin>>n;
	string s;
	cin>>s;
	int zeros = count(s.begin(), s.end(), '0');
	int ones = count(s.begin(), s.end(), '1');
	cout<<n-(2*(min(zeros, ones)));
}