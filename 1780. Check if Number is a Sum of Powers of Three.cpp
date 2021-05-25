Question Link : https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/

//Solution by Amreen

class Solution {
public:
    bool checkPowersOfThree(int n) {
        vector<int>p;
        int i;
        long s=1;
        for(i=1;i<=16;i++)
        {
            p.push_back(s);
            s*=3;
        }
        p.push_back(s);
        i=15;
        while(i>0 && n>0)
        {
            if(n>=p[i])
            {
                n=n-p[i];
                i--;
            }
            else i--;
        }
        if(n==1 || n==0)
            return true;
        return false;
    }
};
