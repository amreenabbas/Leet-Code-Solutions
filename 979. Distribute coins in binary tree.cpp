Question Link : https://leetcode.com/problems/distribute-coins-in-binary-tree/

//Solution by Amreen

class Solution {
public:
    int dfs(TreeNode*node,int &no_of_moves)
    {
        if(!node)
            return 0;
        int left = dfs(node->left,no_of_moves);
        int right = dfs(node->right,no_of_moves);
        no_of_moves = no_of_moves+abs(left)+abs(right);
        return node->val+left+right-1;
    }
    int distributeCoins(TreeNode* root) {
        int no_of_moves=0;
        int t = dfs(root,no_of_moves);
        return no_of_moves;
    }
};
