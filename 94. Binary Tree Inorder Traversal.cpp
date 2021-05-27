Question Link : https://leetcode.com/problems/binary-tree-inorder-traversal/

//Solution by Amreen

class Solution {
public:
    void ino(TreeNode* root,vector<int>&ans)
    {
        if(!root)
            return;
        ino(root->left,ans);
        ans.push_back(root->val);
        ino(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        ino(root,ans);
        return ans;
    }
};
