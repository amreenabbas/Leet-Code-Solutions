Question Link : https://leetcode.com/problems/power-of-three/

//created by js0805

class Solution {
public:
    bool isPowerOfThree(int n) {
        return n>0 && 1162261467 % n ==0;
    }
};


//Alternate solution by Amreen

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)
            return false;
        if(n==1)
            return true;
        long s=1;
        int i;
        for(i=1;i<=30;i++)
        {
            s*=3;
            if(s==n)
                return true;
            if(s>n)
                break;
        }
        return false;
    }
};
