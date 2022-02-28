#include <bits/stdc++.h>

using namespace std;

int main() {
    long double a,b,c,d;
    cin>>a>>b>>c>>d;

    long double new_b = b/pow(10,12);
    long double new_d = d/pow(10,12);
    
    if (pow(a,new_b)> pow(c,new_d))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
