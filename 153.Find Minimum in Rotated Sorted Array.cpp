Question Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

//created by js0805

class Solution {
public:
    int findMin(vector<int>& nums) {
  
        int t = INT_MAX;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]<t)
            {
                t = nums[i];
            }
        }
        return t;
    }
};
//same as 154 and this time its 100% over both.
