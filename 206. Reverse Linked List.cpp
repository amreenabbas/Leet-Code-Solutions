Question Link : https://leetcode.com/problems/reverse-linked-list/

//Solution by Amreen

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*c=head,*p=NULL,*n=NULL;
        if(!head)
            return head;
        while(c)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        return p;
    }
};
