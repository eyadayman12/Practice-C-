#include <bits/stdc++.h>

using namespace std;

#define ll		long long

ll length;

void generateBinary(string s){
     if (int(s.size()) == length){
        	cout<<s<<endl;
		return;	
	}
    generateBinary(s+'0');
    generateBinary(s+'1');
}
int main() {
	cin>>length;
	generateBinary("");	
}