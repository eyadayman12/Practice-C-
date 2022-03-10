#include <bits/stdc++.h>

using namespace std;

#define test int t;cin>>t;while(t--)
#define ll long long

int main(){
	test{
		int n,m,r,c;
		cin>>n>>m>>r>>c;
		int distance = 0;
		distance = max(distance , (r-1)+(c-1));
		distance = max(distance , (n-r)+(c-1));
		distance = max(distance , (r-1)+(m-c));
		distance = max(distance , (n-r)+(m-c));                       
		cout<<distance<<endl;
	}	     
}