Question Link : https://leetcode.com/problems/maximum-depth-of-binary-tree/

//Solution by Amreen

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
        return max(l,r)+1;
    }
};
