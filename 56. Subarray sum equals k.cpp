Question Link : https://leetcode.com/problems/subarray-sum-equals-k/

//Solution by Amreen

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int no = 0,curr_sum = 0, i,n=nums.size();
        unordered_map<int,int>sum;
        sum[0] = 1;
        for(i=0;i<n;i++)
        {
            curr_sum+=nums[i];
            
            if(sum.find(curr_sum-k)!= sum.end())
            {
                no+=sum[curr_sum-k];
            }
                sum[curr_sum]++;
        }
        return no;
    }
};
