#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	      int a,b;
	      cin>>a>>b;
	      if (a == b) cout<<0<<endl;
	      else {

	        	int diff = abs(a-b);
			cout<<((abs(a-b)%10==0) ? diff/10 :(diff/10) +1)<<endl;
		}
	}
	return 0;
}