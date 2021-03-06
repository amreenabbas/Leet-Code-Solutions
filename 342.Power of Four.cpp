Question Link : https://leetcode.com/problems/power-of-four/

//created by js0805

class Solution {
public:
    bool isPowerOfFour(int num) {
        
           return num > 0 && (num & (num - 1)) == 0 && (num - 1) % 3 == 0;
    }
};

//Alternate solution by Amreen

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0)
            return false;
        if(n==1)
            return true;
        long s=1;
        int i;
        for(i=1;i<=16;i++)
        {
            s*=4;
            if(s==n)
                return true;
            if(s>n)
                return false;
        }
        return false;
    }
};
