Question Link : https://leetcode.com/problems/power-of-two/

//created by js0805

class Solution {
public: 
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return (n==pow(2,ceil(log2(n)))) ? true: false;
        
    }
};
