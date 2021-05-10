Question Link : https://leetcode.com/problems/reverse-nodes-in-k-group/

//Solution by Amreen

class Solution {
public:
    int len(ListNode* head, int k)
    {
        int i=0;
        ListNode* c = head;
        while(c)
        {
            i++;
            c=c->next;
        }
        return i;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*c=head,*p=NULL,*n=NULL;
        if(!head || k==1 || len(head,k) <k )
            return head;
        int i=0;
        while(c && i<k)
        {
            i++;
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        if(n)
            head->next = reverseKGroup(n,k);
        return p;
    }
};
