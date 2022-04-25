#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		string s;
		cin>>s;
		int n = stoi(s);
		string zeros = "";
		int c = count(s.begin(), s.end(), '0');
		int k =  int(s.size()) - c;
		cout<<k<<endl;
		if (k==1) cout<<n;
		else{
			while (n){
				int r = n%10;
				if (r==0) {
					n/=10;
					zeros+="0";
					continue;}
				cout<< to_string(r) + zeros << " ";
				n/=10;
				zeros += "0";
			}
		}
	
		cout<<endl;
			
	}
}