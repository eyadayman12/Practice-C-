#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main(){        
	int n;
	int cont_pos = 1;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++) cin>>arr[i];
	sort(arr, arr+n);
	for (int i=0; i<n; i++){
		if (arr[i] >= cont_pos) cont_pos++;
	}
	cout<<cont_pos-1;
                      
		
}