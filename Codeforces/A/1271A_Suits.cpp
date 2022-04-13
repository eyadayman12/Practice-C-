#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	if (f>e){
		int p = min(min(b,c),d);
		d-=p;
		if (d>0){
			int p2 = min(a,d);
			cout<<(p*f)+(p2*e);
		}
		else cout<<p*f;
	}
	else{
		int p = min(a,d);
		d-=p;
		if (d>0){
			int p2 = min(min(b,c),d);
			cout<<(p*e)+(p2*f);
		}
		else cout<<p*e;		
	}
}