//https://leetcode.com/problems/add-digits/submissions/
//created by js0805
class Solution {
public:
    int addDigits(int n) {
        int t = 1 + ( (n - 1) % 9 );
        return t;
        
        
    }
};
