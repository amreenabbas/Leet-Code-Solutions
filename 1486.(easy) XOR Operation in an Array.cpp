//https://leetcode.com/problems/xor-operation-in-an-array/
//created by js0805
class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = start;
        int t = start;
        for(int i=1;i<n;i++){
            ans = ans ^ (t + 2*i);
        }
        return ans;
    }
};
