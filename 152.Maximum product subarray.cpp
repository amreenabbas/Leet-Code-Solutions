Question Link : https://leetcode.com/problems/maximum-product-subarray/

//created by Amreen
 
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
      int l,lm,i;
        int r,rm;
        l=nums[0];
        r=nums[n-1];
        lm=l;rm=r;
        for( i=1;i<n;i++)
        {
            if(l==0)
                l=1;
            l=l*nums[i];
            lm=max(l,lm);
        }
        for( i=n-2;i>=0;i--)
        {
            if(r==0)
                r=1;
            r=r*nums[i];
            rm=max(r,rm);
        }
        return max(rm,lm);
    }
};
