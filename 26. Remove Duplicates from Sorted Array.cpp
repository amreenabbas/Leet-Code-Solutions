Question Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/

//Solution by Amreen

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,n=nums.size(),j=1;
        if(n==0)
            return 0;
        for(i=1;i<n;i++)
        {
            if(nums[i] != nums[i-1])
            {
                nums[j] = nums[i];
                j++;
            }    
        }
        
        return j;
    }
};
