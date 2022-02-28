#include <bits/stdc++.h>

using namespace std;

int main() {
    float n;
    cin>>n;
    if (n != int(n)) cout<<"float "<<int(n)<<" "<<n-int(n);
    else cout<<"int "<<n;
    return 0;
}
