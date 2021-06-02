Question Link : https://leetcode.com/problems/total-hamming-distance/

//Solution by Amreen

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int x=0,i,s=0,n=nums.size();
        for(i=0;i<32;i++)
        {
            s=0;
            for(int e:nums)
                s+=((e>>i)&1);
            x+=s*(n-s);
        }
        return x;
    }
};
