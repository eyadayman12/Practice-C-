#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int max_width = max(2*b,a);
		int max_height = max(2*a,b);
		int sq = pow(min(max_width, max_height),2);
		cout<<sq<<endl;
	}
}