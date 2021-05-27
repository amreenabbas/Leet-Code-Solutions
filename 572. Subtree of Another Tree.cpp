Question Link : https://leetcode.com/problems/subtree-of-another-tree/

//Solution by Amreen

class Solution {
public:
    bool check(TreeNode*s, TreeNode*t)
    {
        if(s==NULL && t==NULL)
            return true;
        if(s==NULL || t==NULL)
            return false;
        return (s->val==t->val)&&check(s->left,t->left)&&check(s->right,t->right);
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s==NULL)
            return false;
        if(check(s,t))
            return true;
        return isSubtree(s->left,t)||isSubtree(s->right,t);
    }
};
