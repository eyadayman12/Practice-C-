#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	int q;
	cin>>q;
	while(q--){
		int arr[3];
		for (int i=0; i<3; i++) cin>>arr[i];
		sort(arr, arr+3);
		if (arr[0] == arr[1] && arr[0] == arr[2]) cout<<0<<endl;
		else{
			int a = arr[0];
			int b = arr[1];
			int c = arr[2];
			if (a+1 == c && b+1 == c) {
				a++;
				b++;
				cout<< abs (a-b) + abs(a-c) + abs(b-c)<<endl;
			}
			else if(a+1 == b && b+1==c){
				a++;
				c--;
				cout<<  abs (a-b) + abs(a-c) + abs(b-c)<<endl;
			}
			else if ((b+1 == c || b== c) && a+1!=b){
				a++;
				b--;
				c--;
				cout<<  abs (a-b) + abs(a-c) + abs(b-c)<<endl;
			}
			else if (a+1 == b && b==c) cout<<0<<endl;
			else {
				 a++;
				 b++;
				 c--;
				cout<<  abs (a-b) + abs(a-c) + abs(b-c)<<endl;
			}
		}
	}
}