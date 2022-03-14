#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int num_of_rooms = 0;
	while (n--){
		int p,q;
		cin>>p>>q;
		if (p<q-1) num_of_rooms++;
	}
	cout<<num_of_rooms;
}