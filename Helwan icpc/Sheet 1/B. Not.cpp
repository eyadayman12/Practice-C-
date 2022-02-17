/**
 * Problem Statment:
 * Given is an integer x that is greater than or equal to 0, and less than or equal to 1. 
 * Output 1 if x is equal to 0, or 0 if x is equal to 1.
 */

///Solution:

#include <iostream>

using namespace std;

int main() {
    int x;
    cin>>x;
    cout<<(x == 0) ? 1:0;
    return 0;  
}