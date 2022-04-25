#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		string s;
		cin>>s;
		int n = int(s.size()); 
		int num = stoi(s);
		if (n == 1) cout<<(num * 10) - 9<<endl;
		else if (n == 2) {
			num = num/10;
			cout<<(num * 10) - 7<<endl;
			}
		else if (n == 3) {
			num = num /100;
			cout<<(num * 10) - 4<<endl; 
			}
		else {
			num = num / 1000;
			cout<< (num * 10)<<endl;
		 }
	}
}