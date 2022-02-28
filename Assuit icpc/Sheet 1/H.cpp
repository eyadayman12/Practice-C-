#include <bits/stdc++.h>

using namespace std;

int main() {

    double a,b;
    cin>>a>>b;
    double division = a/b;
    double f = floor(division);
    double c = ceil(division);
    double r = round(division);
    cout<<"floor "<<a<<" / "<<b<<" = "<<f<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<c<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<r<<endl;

    return 0;
}
