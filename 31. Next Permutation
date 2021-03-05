Question link : https://leetcode.com/problems/next-permutation/

//Solution by Amreen

class Solution {
public:
    void reverse(vector<int>&nums, int start, int end)
    {
        int i  = start, j = end;
        while(i<j)
        {
            int t = nums[i];
            nums[i] = nums[j];
            nums[j] = t;
            i++;
            j--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int i,n=nums.size();
        for(i=n-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
                break;
        }
        if(i == 0)
            reverse(nums,0,n-1);
        else
        {
            int min_ele,pos;
            for(int j = i;j<n;j++)
            {
                if(nums[j]>nums[i-1])
                {
                    pos = j;
                }   min_ele = min(min_ele,nums[j]);
            }
            swap(nums[pos],nums[i-1]);
            reverse(nums,i,n-1);
        }
    }
};
