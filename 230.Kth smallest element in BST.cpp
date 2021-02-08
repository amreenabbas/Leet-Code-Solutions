Question link : https://leetcode.com/problems/kth-smallest-element-in-a-bst/

//Solution by Amreen
    
class Solution {
public:
    int sm(TreeNode* root, int k, int *i)
    {
        if(!root)
            return INT_MAX;
        int l = sm(root->left,k,i);
        if(l!= INT_MAX)
            return l;
        if(++*i == k)
            return root->val;
        return sm(root->right,k,i);
    }
    int kthSmallest(TreeNode* root, int k) {
        int i=0;
       
        return sm(root,k,&i);
    }
};
