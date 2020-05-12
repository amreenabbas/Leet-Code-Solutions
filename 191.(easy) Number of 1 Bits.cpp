//https://leetcode.com/problems/number-of-1-bits/
//created by js0805
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int t = __builtin_popcount(n);
        return t;
    }
};
