//https://leetcode.com/problems/hamming-distance/
//created by js0805
class Solution {
public:
    int hammingDistance(int x, int y) {
        int t = x ^ y;
        int j = __builtin_popcount(t);
        
        return j;
    }
};
