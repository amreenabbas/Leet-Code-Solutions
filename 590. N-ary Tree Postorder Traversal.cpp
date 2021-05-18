Question Link : https://leetcode.com/problems/n-ary-tree-postorder-traversal/

//Solution by Amreen

class Solution {
public:
    void post(Node* root, vector<int>&ans)
    {
        if(!root)
            return;
        for(auto c:root->children)
            post(c,ans);
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int>ans;
        post(root,ans);
        return ans;
    }
};
