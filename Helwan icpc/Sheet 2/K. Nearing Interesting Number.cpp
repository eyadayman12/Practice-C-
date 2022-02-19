#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int a,sum=0,temp=0;
    cin>>a;
    for (int i=a; i<=10000; i++) {
        int temp2 = i;
        for (int j = 0; j<=10000; j++) {
            temp=temp2%10;
            sum+=temp;
            temp2/=10;
            if (temp2==0) break;
        }
        if (sum%4==0){
            cout<<i;
            break;
        }
        sum=0;
    }

    return 0;
}
