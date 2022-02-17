/**
 * Problem Statment:
 * Takahashi has rolled three dice. They are showing numbers a, b, and c on the top faces.
 * Find the sum of the numbers on the bottom faces.
 * Here, each of these dice is a standard cubic die, where the sum of the numbers on opposite faces is 77.
 */

/// Solution:

#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<21-(a+b+c);
    return 0;
}
