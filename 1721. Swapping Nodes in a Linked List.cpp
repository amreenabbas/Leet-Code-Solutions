Question Link : https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

//Solution by Amreen

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* s=head,*f=head,*t;
        int i=0;
        k--;
        while(i++<k && s)
        {
            s=s->next;
        }
        
        t = s;
        while(s->next)
        {
            s = s->next;
            f = f->next;
        }
        int d = f->val;
        f->val = t->val;
        t->val = d;
        return head;
    }
};
