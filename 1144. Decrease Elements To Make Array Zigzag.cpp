Question Link : https://leetcode.com/problems/decrease-elements-to-make-array-zigzag/

//Solution by Amreen

class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        int even=0,odd=0,i,n=nums.size(),p;
        if(n==1)
            return 0;
        for(i=0;i<n;i+=2)
        {
            if(i==0)
            {
                if(nums[i+1]>=nums[i])
                {
                    even+=(nums[i+1]-nums[i]+1);
                    p=nums[i]-1;
                    continue;
                }  
            }   
            else if(i==n-1)
            {
                if(p>=nums[i])
                {
                    even+=(p-nums[i]+1);
                    continue;
                }
            }
            else
            {
                if(nums[i]<=p)
                    even+=(p-nums[i]+1);
                if(nums[i+1]>=nums[i])
                {
                    even+=(nums[i+1]-nums[i]+1);
                    p=nums[i]-1;
                    continue;
                }
            }
            if(i+1<n)
                p=nums[i+1];
        }
        p=nums[0];
        for(i=1;i<n;i+=2)
        {
            if(i==n-1)
            {
                if(p>=nums[i])
                {
                    odd+=(p-nums[i]+1);
                    continue;
                }
            }
            else
            {
                if(p>=nums[i])
                    odd+=(p-nums[i]+1);
                if(nums[i+1]>=nums[i])
                {
                    odd+=(nums[i+1]-nums[i]+1);
                    p=nums[i]-1;
                    continue;
                }
            }
            if(i+1<n)
                p=nums[i+1];
        }
        return min(even,odd);
    }
};
