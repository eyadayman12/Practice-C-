#include <bits/stdc++.h>

using namespace std;

int main() {
    
    long long a,b,c,d, multiply1=0, multiply2=0, difference=0;
    cin>>a>>b>>c>>d;
    multiply1 = a*b;
    multiply2 = c*d;
    difference = multiply1 - multiply2;
    cout<<"Difference = "<<difference;
    return 0;
}