#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,i,b=0,c=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>=0) b+=a[i];
        else c+=a[i];
    }
    cout<<b-c<<endl;
    return 0;
}
