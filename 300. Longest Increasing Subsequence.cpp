Question Link : https://leetcode.com/problems/longest-increasing-subsequence/

//Solution by Amreen

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int i,j,n=nums.size();
        vector<int>dp(n,1);
        for(i=1;i<n;i++)
        {
            dp[i] = 1;
            for(j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                    dp[i] = max(dp[i],dp[j]+1);
            }
        }
        int maxele = 1;
        for(i=0;i<n;i++)
            maxele = max(maxele,dp[i]);
        return maxele;
    }
};

