#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int exp1 = a+b*c;
	int exp2 = a*(b+c);
	int exp3 = a*b*c;
	int exp4 = (a+b)*c;
	int exp5 = a+b+c;
	int max1_exp = max(exp1, exp2);
	int max2_exp = max(exp3, exp4);
	int max_exp = max(max(max1_exp, max2_exp) , exp5);
	cout<<max_exp;
}