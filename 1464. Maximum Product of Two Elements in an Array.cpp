Question Link : https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

//Solution by Amreen

class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int i,n=nums.size(),max1=nums[0]>nums[1]?nums[0]:nums[1],max2=nums[0]<nums[1]?nums[0]:nums[1];
        for(i=2;i<n;i++)
        {
            if(nums[i]>=max1)
            {
                max2=max1;
                max1=nums[i];
            }     
            else if(nums[i]>=max2)
                max2=nums[i];
        }
        return (max1-1)*(max2-1);
    }
};
