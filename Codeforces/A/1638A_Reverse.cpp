#include <bits/stdc++.h>

using namespace std;

#define test int t;cin>>t;while(t--)

int main(){
	test{
		int n;
		cin>>n;
		int arr[n+1];
		int i,j,k;
		for(i=1; i<=n; i++) cin>>arr[i];
		for(i=1; i<=n; i++){
			if (arr[i] != i){
				for (j=i+1; j<=n;j++){
					if (arr[j] == i){
						for (k=j; k>=i; k--) cout<<arr[k]<<" ";
						break;
					}
				}
				for (i=j+1; i<=n; i++) cout<<arr[i]<<" ";
				break;
			}
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}