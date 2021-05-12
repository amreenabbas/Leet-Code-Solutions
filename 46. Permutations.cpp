Question Link : https://leetcode.com/problems/permutations/

//Solution by Amreen

class Solution {

    void perm(vector<vector<int>> &res,vector<int> nums, int ind) {
        if (ind == nums.size()-1) {
            res.push_back(nums);
            return;
        }
        for (int i = ind; i < nums.size(); i++) {
            vector<int> t(nums.begin(), nums.end());
            swap(t[ind], t[i]);
            perm(res,t, ind+1);
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        if (nums.size() == 1) {
            res.push_back(nums);
            return res;
        }
        perm(res,nums, 0);
        return res;
    }
};
