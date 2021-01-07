Question Link : https://leetcode.com/problems/maximum-product-of-three-numbers/

//created by js0805

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int t = nums[n-3] * nums[n-2] * nums[n-1];
        int j = nums.back() * nums[1] * nums[0];
        int a = max(t,j);
        return a;
        
    }
};
