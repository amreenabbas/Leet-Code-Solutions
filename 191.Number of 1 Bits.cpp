Question Link : https://leetcode.com/problems/number-of-1-bits/

//created by js0805

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int t = __builtin_popcount(n);
        return t;
    }
};

//Alternate solution by Amreen

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
        while(n>0)
        {
            if(n&1)
                c++;
            n=n>>1;
        }
        return c;
    }
};
