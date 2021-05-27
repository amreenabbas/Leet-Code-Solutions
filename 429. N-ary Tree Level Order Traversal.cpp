Question Link : https://leetcode.com/problems/n-ary-tree-level-order-traversal/

//Solution by Amreen

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*>q;
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
                Node* t = q.front();
                q.pop();
                v.push_back(t->val);
                for(auto c:t->children)
                    q.push(c);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
