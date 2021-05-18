Question Link : https://leetcode.com/problems/binary-tree-postorder-traversal/

//Solution by Amreen

class Solution {
public:
    void pos(TreeNode*root,vector<int>&ans)
    {
        if(!root)
            return;
        pos(root->left,ans);
        pos(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        pos(root,ans);
        return ans;
    }
};
