Question Link : https://leetcode.com/problems/binary-tree-level-order-traversal/

//Solution by Amreen

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        if(!root)
            return ans;
        while(!q.empty())
        {
            int s = q.size();
            int i=0;
            vector<int>v;
            while(i++<s)
            {
                TreeNode* t = q.front();
                q.pop();
                v.push_back(t->val);
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
    
