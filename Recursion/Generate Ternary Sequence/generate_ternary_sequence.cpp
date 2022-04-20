#include <bits/stdc++.h>

using namespace std;

#define ll		long long

ll length;

void generateTernary(string s){
     if (int(s.size()) == length){
        	cout<<s<<endl;
		return;	
	}
    generateTernary(s+'0');
    generateTernary(s+'1');
    generateTernary(s+'2');

}
int main() {
	cin>>length;
	generateTernary("");	
}