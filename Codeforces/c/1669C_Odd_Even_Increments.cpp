#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, cnt1=0, cnt2=0, cnt3=0, cnt4=0;
		cin>>n;
		int arr[n+1];
		for (int i=1; i<=n; i++) cin>>arr[i];
		for (int i=1; i<=n; i+=2){
			if (arr[i] % 2 != 0) cnt1++;
			else cnt2++;	
		}
		if (cnt1 == 0 || cnt2 == 0){
		        for(int i=2; i<=n; i+=2){
		        	if (arr[i] % 2 == 0) cnt3++;
				else cnt4++;
			}
			if (cnt3 == 0 || cnt4 == 0) cout<<"YES";
			else cout<<"NO";
		}
		else cout<<"NO";
		cout<<"\n";
	}
}