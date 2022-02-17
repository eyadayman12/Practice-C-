/**
 * Problem Statment:
 * Given are integers a, b, c, and d.
 * We will choose integers x and y such that a≤x≤b and c≤y≤d 
 * Find the maximum possible value of x−y here.
 */

/// Solution:

#include <iostream>

using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x = max(a,b), y=min(c,d);
    cout<<x-y;
    return 0;
}
