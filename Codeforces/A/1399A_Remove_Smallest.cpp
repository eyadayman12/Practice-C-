#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n);
		for (int i=0; i<n; i++) cin>>a[i];
		if (n==1) cout<<"YES"<<endl;
		else{
			sort(a.begin(), a.end());
			for (int i=0; i<n; i++){
				for (int j=i+1; j<n; j++){
					if ( abs (a[i] - a[j]) <= 1){
							a.erase(a.begin()+i); 
							i--;
							n--;		
					}
				}
			}
			cout<<(a.size()==1 ? "YES":"NO")<<endl;	
		}
	}
}