Question Link : https://leetcode.com/problems/subsets/submissions/

//Solution by Amreen

class Solution {
public:
    void func(vector<int>&nums, int curr,vector<vector<int>>&res,vector<int>ans, int k)
    {
        int i,n = nums.size();
        if(ans.size()==k)
        {
            res.push_back(ans);
            return;
        }
            
        for(i=curr;i<n;i++)
        {
            ans.push_back(nums[i]);
            func(nums,i+1,res,ans,k);
            ans.pop_back();
        }
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>ans;
        int n = nums.size();
        for(int k=0;k<n+1;k++)
        func(nums,0,res,ans,k);
        return res;
    }
};
