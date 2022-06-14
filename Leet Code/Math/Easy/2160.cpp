/// problem link: https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/

/// Sol:

class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        string s1 = "", s2="";
        s1 += s[0]; s1+=s[2]; s2+=s[1]; s2+=s[3];
        int sum = stoi(s1) + stoi(s2);
        return sum;
    }
};