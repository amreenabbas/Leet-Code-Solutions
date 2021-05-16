Question Link : https://leetcode.com/problems/running-sum-of-1d-array/

//Solution by Amreen

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sum;
        int i,n=nums.size();
        sum.push_back(nums[0]);
        for(i=1;i<n;i++)
        {
            sum.push_back(nums[i]+sum[i-1]);
        }
        return sum;
    }
};
