Question Link : https://leetcode.com/problems/average-of-levels-in-binary-tree/

//Solution by Amreen

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        if(!root)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            double sum=0;
            for(int i=0;i<s;i++)
            {
                TreeNode*t=q.front();
                q.pop();
                sum+=t->val;
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
            double a=(1.0*sum)/s;
            ans.push_back(a);
        }
        return ans;
    }
};
