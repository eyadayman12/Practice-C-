#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	char arr[n][m];
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++) cin>>arr[i][j];
	}
	bool flag = true;
	for (int i=1; i<n; i++){
		for (int j=0; j<m; j++){
			if (arr[i][j] == arr[i-1][j]) {
				flag = false;
				break;
			}
		}
	}
	for (int i=0; i<n; i++){
		for (int j=1; j<m; j++){
			if (arr[i][j] != arr[i][j-1]){
				flag = false;
				break;
			}
		}
	}
	cout<<(flag ? "YES":"NO");
}