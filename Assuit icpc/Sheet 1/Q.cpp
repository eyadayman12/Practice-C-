#include <bits/stdc++.h>

using namespace std;

int main() {

    /**
    +ve X, +ve Y Q1
    +ve X, -ve Y Q4
    -ve X, +ve Y Q2
    -ve X, -ve Y Q3
    **/
    double x,y;
    cin>>x>>y;
    if (x==0 && y==0) cout<<"Origem";
    else if (x>0 && y>0) cout<<"Q1";
    else if (x>0 && y<0) cout<<"Q4";
    else if (x<0 && y>0) cout<<"Q2";
    else if (x<0 && y<0) cout<<"Q3";
    else if (y==0) cout<<"Eixo X";
    else if (x == 0) cout<<"Eixo Y";
    return 0;
}
