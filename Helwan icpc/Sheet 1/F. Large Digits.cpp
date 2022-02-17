/**
 * Problem Statment:
 *  For an integer n, let S(n) be the sum of digits in the decimal notation of n. For example, we have S(123) = 1 + 2 + 3 = 6
 * Given two 3-digit integers A and B, find the greater of S(A) and S(B).
 */

///Solution:

#include <iostream>

using namespace std;

int main() {
    int a,b, sumA=0, sumB=0;
    cin>>a>>b;
    sumA = a%10+(a/10)%10+(a/100)%10;
    sumB = b%10+(b/10)%10+(b/100)%10;
    int cond = (sumA >= sumB) ? sumA:sumB;
    cout<< cond;
    return 0;
}

