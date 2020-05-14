//https://leetcode.com/problems/remove-linked-list-elements/
//created by js0805
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
        {
            return NULL;
        }

        ListNode* t = head;
        while(t->next!=NULL)
        {
            if(t->next->val == val)
            {
                t->next = t->next->next;
            }
            else
            {
                t = t ->next;
            }
        }
                if(head->val == val)
            head =  head->next;
    
        return head;
        
    }
};
