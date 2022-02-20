#include <iostream>

using namespace std;

int main() {
	int x, count=0;
	string s="";
	cin >> x;
	while (x--) {
		cin >> s;
		if (s == "X++" || s == "++X") count++;
		else count--;
	}
	cout << count;
	return 0;
}