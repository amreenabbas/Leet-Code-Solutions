Question Link : https://leetcode.com/problems/univalued-binary-tree/

//Solution by Amreen

class Solution {
public:
    bool check(TreeNode* root,int v)
    {
        if(!root)
            return true;
        return v==root->val&&check(root->left,v)&&check(root->right,v);
    }
    bool isUnivalTree(TreeNode* root) {
        if(!root)
            return true;
        return check(root,root->val);
    }
};
