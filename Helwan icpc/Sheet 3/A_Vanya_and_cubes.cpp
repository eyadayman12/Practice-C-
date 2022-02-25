#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, count=0, current=0;
    cin>>n;
    while (n>0){
        count++;
        current = current + count;
        n-=current;
        if (n<0) count--;
    }
    cout<<count;
    return 0;
}