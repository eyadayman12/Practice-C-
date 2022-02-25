#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int t1=0, t2=0, x1, x2, y;
    if (f>e){
        x1 = min(min(b,c), d);
        t1=x1*f;
        y= d-x1;
        if (y>0){
            x2=min(a,y);
            t2=x2*e;
        }
        cout<<t1+t2;
    }
    else if (e>=f){
        x1 = min(a,d);
        t1 = x1*e;
        y=d-x1;
        if (y>0){
            x2 = min(min(b,c), y);
            t2 = x2*f;
        }
        cout<<t1+t2;
    }

    return 0;
}