Question Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

//Solution by Amreen

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      
        int i,n=nums.size(),j=1;
        int ce = nums[0],cf=1;
        for(i=1;i<n;i++)
        {
            if(nums[i] == ce)
            {
                if(cf<2)
                {
                    nums[j++] = nums[i];
                    cf++;
                }
                else
                {
                    continue; 
                }
                
            }
            else
            {
                ce = nums[i];
                cf = 1;
                nums[j++] = nums[i];
            }
        }
        
        return j;
    }
};
    
