Question Link : https://leetcode.com/problems/delete-node-in-a-linked-list/

//created by js0805

class Solution {
public:
    void deleteNode(ListNode* node) {
        *node = *node->next;
    }
};

//Alternate solution by Amreen

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* t = node->next;
        node->val = t->val;
        node->next = t->next;
        delete(t);
    }
};
