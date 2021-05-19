Question Link : https://leetcode.com/problems/maximum-depth-of-n-ary-tree/

//Solution by Amreen

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root)
            return 0;
        int maxd=0;
        for(auto r:root->children)
        {
            maxd=max(maxd,maxDepth(r));
        }
        return 1+maxd;
    }
};
