Question Link : https://leetcode.com/problems/sum-of-digits-in-base-k/

//Solution by Amreen

class Solution {
public:
    int sumBase(int n, int k) {
        int b=0,s=0;
        while(n>0)
        {
            int r = n%k; 
            s+=r;
            n/=k;
        }
        return s;
    }
};
