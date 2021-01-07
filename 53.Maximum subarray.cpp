Question Link : https://leetcode.com/problems/maximum-subarray/

//created by Amreen

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs = 0, ms = 0, n = nums.size(),f = 0,s = nums[0];
        if (n==1)
            return nums[0];
        for(int i = 0;i < n; i++)
        {
            if(nums[i] > 0)
                f = 1;
            if(s < nums[i])
                s = nums[i];
        }
        if(f==0)
        return s;
    
        for(int i = 0;i < n; i++)
        {
            cs = cs+nums[i];
            if(cs < 0)
                cs = 0;
            ms = ms>cs ? ms : cs;
        }
        return ms;
    }
};
