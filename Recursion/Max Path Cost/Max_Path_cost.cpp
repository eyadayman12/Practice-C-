#include <bits/stdc++.h>

using namespace std;

#define ll		long long

const int MAX = 100;
int grid[MAX][MAX];
ll n;

ll maxPathSumOfGrid(ll r, ll c){
	if (r==n || c==n || r<0 || c<0) return 0;
	
	if (r==n-1 && c==n-1) return grid[r][c];

	ll calculatingPath1 = maxPathSumOfGrid(r+1,c);
	ll calculatingPath2 = maxPathSumOfGrid(r,c+1);
	
	return grid[r][c]+max(calculatingPath1, calculatingPath2);
}
int main(){
	
	cin>>n;
	for (ll i=0; i<n; i++)
		for (ll j=0; j<n; j++) cin>>grid[i][j];
	cout<<maxPathSumOfGrid(0,0);	
}