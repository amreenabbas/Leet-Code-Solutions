Question Link : https://leetcode.com/problems/remove-nth-node-from-end-of-list/

//Solution by Amreen

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*slow=head,*fast=head;
        if(head->next == NULL)
            return NULL;
        int i=0;
        while(i++<n && slow)
            slow=slow->next;
        if(!slow)
        {
            return head->next;
        }
        while(slow->next)
        {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* t = fast->next;
        fast->next = fast->next->next;
        delete(t);
        return head;
    }
};
