Question Link : https://leetcode.com/problems/invert-binary-tree/

//created by js0805
//simply using the concept of mirror
//replacing left node with right and right with left using a temp node
//and doing a post order traversal for the above operation.

class Solution {
public:
	TreeNode* invertTree(TreeNode* root) {
		if (root == NULL)return NULL;
		invertTree(root->left);
		invertTree(root->right);
		auto temp = root->right;
		root->right = root->left;
		root->left = temp;
		return root;
	}
};

//Alternate soluiton by Amreen

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        TreeNode*l = invertTree(root->left);
        TreeNode*r=invertTree(root->right);
        root->left=r;
        root->right = l;
        return root;
    }
};
