#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,n;
		cin>>x>>y>>n;
		int m = n%x;
		if (m>y) cout<<n-m+y<<endl;
		else if (m==y) cout<<n<<endl;
		else cout<<n-m-x+y<<endl; 
	}
}