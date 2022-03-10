#include <bits/stdc++.h>

using namespace std;

#define test int tt;cin>>tt;while(tt--)
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define in cin>>
 
int main(){
	test{
		ll x;
		in x;
		int t=x%14;
		cout<<(x > 14 && (t>=1 && t<=6) ? "YES":"NO")<<endl;	
	}	
}