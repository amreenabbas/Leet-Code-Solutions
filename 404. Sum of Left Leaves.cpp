Question Link : https://leetcode.com/problems/sum-of-left-leaves/

//Solution by Amreen

class Solution {
public:
    void solve(TreeNode* root, int &s)
    {
        if(root->left==NULL&&root->right==NULL)
            return ;
        if(root->left&&root->left->left==NULL&&root->left->right==NULL){     
             s+=root->left->val;
        }
        if(root->left)
            solve(root->left,s);
        if(root->right)
             solve(root->right,s);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int s = 0;
        solve(root,s);
        return s;
    }
    
    
};
