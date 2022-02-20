#include <iostream>

using namespace std;

int main() {
    int n, a=0, d=0;
    cin>>n;
    while(n--){
        char s;
        cin>>s;
        if (s=='A') a++;
        else d++;
    }
    if (a>d) cout<<"Anton";
    else if (d>a) cout<<"Danik";
    else cout<<"Friendship";
    return 0;
}
