/// Problem Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

/// sol:

class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp = n;
        int mult = 1, sum = 0;
        while(n){
            int d = n%10;
            mult *= d;
            n/=10;
        }
        while(temp){
            int d = temp%10;
            sum += d;
            temp/=10;
        }
        return mult - sum;
    }
};