#include <bits/stdc++.h>

using namespace std;

#define N (1<<17)


int main(){
	int n,s;
	cin>>n>>s;
	int buy[N], sell[N];
	for (int i=0; i<n; i++){
		char d;
		int p,q;
		cin>>d>>p>>q;
		if (d == 'B') buy[p]+=q;
		else sell[p]+=q;
	}
	int cnt=0, t=0;
	for (t=0; t<pow(10,5); t++){
		if (sell[t]) cnt++;
		if (cnt>=s) break;
	}
	for (int i=t; i>=0; i--){
		if (sell[i]) cout<<"S "<<i<<" "<<sell[i]<<endl;
	}
	cnt=0;
	for (int i=pow(10,5); i>=0; i--){
		if (buy[i]){
			cout<<"B "<<i<<" "<<buy[i]<<endl;
			cnt++;
			if(cnt>=s) break;
		}
	}
}