#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	map<string, int>db;
	string s;
	while(n--){
		cin>>s;
		if (db.count(s) == 0) {
			cout<<"OK"<<endl;
			db[s] = 1;
		}
		else{
			cout<<s<<db[s]<<endl;
			db[s]+=1;
		}
	}
}