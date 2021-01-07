Question Link : https://leetcode.com/problems/create-target-array-in-the-given-order/

//created by js0805

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++)
            ans.insert(ans.begin() + index[i], nums[i]);
        return ans;
    }
};
