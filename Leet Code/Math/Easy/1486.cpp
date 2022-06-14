/// Problem Link: https://leetcode.com/problems/xor-operation-in-an-array/

/// sol:

class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        for (int i=0; i<n; i++) nums[i] = start + 2*i;
        if (n==1){
            return nums[0]; 
        }
        int res = nums[0] ^ nums[1];
        for (int i=2; i<n; i++) res^=nums[i];
        return res;
    }
};