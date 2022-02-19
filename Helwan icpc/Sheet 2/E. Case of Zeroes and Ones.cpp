#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

int main() {
    long long n, num=0;
    cin>>n;
    string s;
    cin>>s;
    int zeros = count(s.begin(), s.end(), '0');
    int ones = count(s.begin(), s.end(), '1');
    cout << n-(2*(min(zeros, ones)));
    return 0;
}
