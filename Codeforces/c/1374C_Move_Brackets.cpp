#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin >>s;
		int op = 0, sum=0;
		for (int i=0; i<n; i++){
		     if (s[i] == '(') sum++;
		     else if (s[i] == ')') sum--;
		     if (sum == -1){
	                	op++;
				sum=0;
			}
		}
		cout<<op<<endl;
	}
}