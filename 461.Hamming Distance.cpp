Question Link : https://leetcode.com/problems/hamming-distance/

//created by js0805

class Solution {
public:
    int hammingDistance(int x, int y) {
        int t = x ^ y;
        int j = __builtin_popcount(t);
        
        return j;
    }
};

//Alternate solution by Amreen

class Solution {
public:
    int hammingDistance(int x, int y) {
        int t = x^y,c=0;
        while(t>0)
        {
            if(t&1)
                c++;
            t=t>>1;
        }
        return c;
    }
};
