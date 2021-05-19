Question Link : https://leetcode.com/problems/minimum-depth-of-binary-tree/submissions/

//Solution by Amreen

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        if((root->left==NULL && root->right!=NULL) || (root->left!=NULL && root->right==NULL))
            return 1+max(minDepth(root->left),minDepth(root->right));
        int l=minDepth(root->left);
        int r=minDepth(root->right);
        return min(l,r)+1;
    }
};
