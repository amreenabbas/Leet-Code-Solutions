Question Link : https://leetcode.com/problems/move-zeroes/

//Solution by Amreen

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,n=nums.size(),j=0;
        for(i=0;i<n;i++)
        {
            if(nums[i] !=0 )
            {
                int t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
                j++;
            }
        }
    }
};
