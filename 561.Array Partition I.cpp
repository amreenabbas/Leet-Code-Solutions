Question Link : https://leetcode.com/problems/array-partition-i/

//Created by js0805

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int t =0;
        for(int i =0;i<nums.size();i=i+2)
        {
            t +=nums[i];
        }
        return t;
    }
};
