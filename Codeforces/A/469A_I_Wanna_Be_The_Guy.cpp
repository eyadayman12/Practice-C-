#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int p;
	cin>>p;
	int x[p];
	for (int i=0; i<p; i++) cin>>x[i];
	int q;
	cin>>q;
	int y[q];
	for (int i=0; i<q; i++) cin>>y[i];
        int size = p+q;
	int arr[size];
	copy(x, x+p, arr);
	copy(y, y+q, arr+p);
	set<int>s;
	for (int i=0; i<size; i++) s.insert(arr[i]);
	bool pass_level = (s.size() == n);
	cout<<(pass_level ? "I become the guy.": "Oh, my keyboard!");
}
