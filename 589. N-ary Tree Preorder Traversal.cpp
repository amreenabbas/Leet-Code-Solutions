Question Link : https://leetcode.com/problems/n-ary-tree-preorder-traversal/

//Solution by Amreen

class Solution {
public:
    void pre(Node* root, vector<int>&ans)
    {
        if(!root)
            return;
        ans.push_back(root->val);
        for(auto c:root->children)
        {
            pre(c,ans);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int>ans;
        pre(root,ans);
        return ans;
    }
};
