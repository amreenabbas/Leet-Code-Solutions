Question Link : https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/

//Solution by Amreen

class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        int ans = INT_MIN,l = 1,k=1;
        if(root == NULL)
            return ans;
        q.push(root);
        while(!q.empty())
        {
            int s = q.size();
            int sum = 0;
            while(s--)
            {
                TreeNode* t = q.front();
                q.pop();
                sum+=t->val;
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
            if(ans<sum)
            {
                ans = sum;
                l = k;
            }
            k++;
        }
        return l;
    }
};
