Question Link : https://leetcode.com/problems/product-of-array-except-self/

//Solution by Amreen

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int i,n=nums.size();
        vector<int>res;
        for(i=0;i<n;i++){
            res.push_back(prod);
            prod*=nums[i];
        }
        prod = 1;
        for(i=n-1;i>=0;i--)
        {
            res[i]*=prod;
            prod*=nums[i];
        }
        return res;
        
    }
};
