#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		if(x>45) cout<<"-1"<<endl;
		else {
			string s = "";
			for (int i=9; i>=1; i--){
				if (x<=i){
					s+=to_string(x);
					x-=x;
					break;
				}
				else{
					x-=i;
					s+=to_string(i);
				}	
			}
			reverse(s.begin(), s.end());
			cout<<s<<endl;
		}
	}
}