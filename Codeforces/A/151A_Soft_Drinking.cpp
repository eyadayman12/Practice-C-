#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int tl = (k*l)/nl;
	int limes = c*d;
	int salts = p/np;
	cout<<min(tl, min(limes, salts))/n;
}