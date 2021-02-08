Question link : https://leetcode.com/problems/symmetric-tree/

//Solution by Amreen

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        stack<TreeNode*>s;
        s.push(root);
        s.push(root);
        while(!s.empty())
        {
            TreeNode* t1,*t2;
            t1 = s.top();
            s.pop();
            t2=s.top();
            s.pop();
            if(!t1 && !t2)
                continue;
            if(!t1 || !t2)
                return false;
            if(t1->val != t2->val)
                return false;
            s.push(t1->left);
            s.push(t2->right);
            s.push(t1->right);
            s.push(t2->left);
        }
        return true;
    }
};
