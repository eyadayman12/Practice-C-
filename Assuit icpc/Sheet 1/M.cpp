#include <bits/stdc++.h>

using namespace std;

int main() {

    char x;
    cin>>x;
    int ascii = int(x);
    if (ascii>=48 && ascii<= 57) cout<<"IS DIGIT";
    else if (ascii>=65 && ascii<=96) cout<<"ALPHA\nIS CAPITAL";
    else cout<<"ALPHA\nIS SMALL";
    return 0;
}
