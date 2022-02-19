#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,h, count=0;
    cin>>n>>h;
    int friends[n];
    for (int i=0; i<n; i++) cin>>friends[i];
    for (int i=0; i<n; i++) {
        if (friends[i] <= h) count++;
        else if (friends [i]>h) count = count+2;
    }
    cout<<count;

    return 0;
}
