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

//Alternate solution by Amreen

class Solution {
public:
    int binsearch(int l, int h, vector<int>&lis, int t)
    {
        while(l<h){
            int m = l+(h-l)/2;
            if(lis[m] >=t)
                h=m;
            else
                l=m+1;
        }
        return h;
    }
    int lengthOfLIS(vector<int>& nums) {
        int i,j,n=nums.size(),l=1;
        vector<int>lis(n,1);
        lis[0] = nums[0];
        for(i=1;i<n;i++)
        {
            if(nums[i]>lis[l-1])
                lis[l++] = nums[i];
            else
            {
                int ind = binsearch(0,l-1,lis,nums[i]);
                lis[ind] = nums[i];
            }
            
        }
        return l;
    }
};
