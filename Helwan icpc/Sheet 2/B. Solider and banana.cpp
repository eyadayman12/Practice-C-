#include<bits/stdc++.h>

using namespace std;

int main() {
    int k,n,w, price=0;
    cin>>k>>n>>w;
    for (int i=1; i<=w;i++) price =price + i*k;
    if (n<price) cout<<price-n;
    else cout<<0;
    return 0;
}
