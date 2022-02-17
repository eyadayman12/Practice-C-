/**
 * Problem Statement:
 * How many integers not less than A and not more than B are there? 
 */

///Solution:

#include <iostream>

using namespace std;

int main() {
    int a,b, num=1, count=0;
    cin>>a>>b;
    for (int i = 1; i<=100; i++){
        if (num>=a && num<=b) count++;
        num++;
    }
    cout<<count;
    return 0;
}
