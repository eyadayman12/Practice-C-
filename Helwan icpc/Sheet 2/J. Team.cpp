#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,a,b,c,count;
    a=b=c=count=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if ((a==1 && b==1) || (b==1 && c==1) || (a==1 && c==1))count++;
        else count+=0;
    }
    cout<<count;
    return 0;
}
