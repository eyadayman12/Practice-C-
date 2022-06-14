/// Problem Link: https://leetcode.com/problems/sum-of-all-odd-length-subarrays/

/// sol:

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for (int i=0; i<arr.size(); i++) sum += (((i+1) * (arr.size() - i)+1)/2) * arr[i];
        return sum;
    }
    
};