Question Link : https://leetcode.com/problems/remove-element/

//Solution by Amreen

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int i,n=nums.size(),j=0;
        for(i=0;i<n;i++)
        {
            if(nums[i] != val)
            {
                nums[j] = nums[i];
               j++;
            }
        }
        return j;
    }
};
