Question Link : https://leetcode.com/problems/swap-nodes-in-pairs/

//Solution by Amreen

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head)
            return head;
        ListNode*t,*c=head,*n=head->next,*p=NULL;
        while(c && n)
        {
            t = n->next;
            n->next = c;
            c->next = t;
            if(!p)
                head = n;
            else
                p->next = n;
            p = c;
            if(t)
            {
                c = t;
                n = c->next;
            }
            else break;
        }
        return head;
    }
};
