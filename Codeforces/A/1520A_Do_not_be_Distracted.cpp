#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		bool check = false;
		for (int i=0; i<n; i++){
			for (int j=i+1; j<n-1; j++){
				if (s[i] != s[j]){
					if (s[i] == s[j+1]) {
						check = true;
						break;
					}
				}		
			}
			if(check) break;
		}
		cout<<(check ? "NO":"YES")<<endl;
	}
	
	
}