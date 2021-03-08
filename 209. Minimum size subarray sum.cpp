Question Link : https://leetcode.com/problems/minimum-size-subarray-sum/

//Solution by Amreen

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j,n=nums.size(),ans=n+1;
        for(j=0;j<n;j++)
        {
            target-=nums[j];
            while(target<=0)
            {
                ans=min(ans,j-i+1);
                target+=nums[i];
                i++;
            }
        }   
            return ans%(n+1);
        }
        
};
