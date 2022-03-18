#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a;
	cin>>n>>a;
	int mi = a, ma = a, cnt=0;
	while (n--){
		cin>>a;
		if (mi > a) {
			cnt++;
			mi=a;
		}
		if (ma < a){
			cnt++;
			ma=a;
		}
	}
	cout<<cnt;
}       