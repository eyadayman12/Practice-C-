#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x,y, sum, subtract, multiply;
    cin>>x>>y;
    sum = x+y;
    subtract = x-y;
    multiply = x*y;
    cout<<x<<" + "<<y<<" = "<<sum<<endl;
    cout<<x<<" * "<<y<<" = "<<multiply<<endl;
    cout<<x<<" - "<<y<<" = "<<subtract<<endl;

    return 0;
}