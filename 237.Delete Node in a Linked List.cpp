Question Link : https://leetcode.com/problems/delete-node-in-a-linked-list/

//created by js0805

class Solution {
public:
    void deleteNode(ListNode* node) {
        *node = *node->next;
    }
};
