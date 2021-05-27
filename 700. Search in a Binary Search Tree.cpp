Question Link : https://leetcode.com/problems/search-in-a-binary-search-tree/

//Solution by Amreen

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root)
            return NULL;
        if(root->val==val)
            return root;
        if(root->val>val)
            return searchBST(root->left,val);
        else
            return searchBST(root->right,val);      
    }
};
