#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if (a%b==0) cout<<0<<endl;
		else{
			if (b>a) cout<<b-a<<endl;
			else {
				cout<<b  - (a%b)<<endl;
			}
		}
	}
}