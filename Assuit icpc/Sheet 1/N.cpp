#include <bits/stdc++.h>

using namespace std;

int main() {

    char x; cin>>x;
    int ascii = int(x);
    if (ascii >= 65 && ascii <= 96) cout<<char(ascii+32);
    else if (ascii >= 97) cout <<char(ascii-32);
    return 0;
}
