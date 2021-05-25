Question Link : https://leetcode.com/problems/power-of-two/

//created by js0805

class Solution {
public: 
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return (n==pow(2,ceil(log2(n)))) ? true: false;
        
    }
};

//Alternate solution by Amreen

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
            return false;
        if(n==1)
            return true;
        long s=1;
        int i;
        for(i=1;i<=31;i++)
        {
            s*=2;
            if(s==n)
                return true;
            if(s>n)
                break;
        }
        return false;
    }
};
