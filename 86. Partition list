Question link : https://leetcode.com/problems/partition-list/

//Solution by Amreen

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* small=NULL, *smallhead=NULL, *large=NULL,*largehead=NULL, *curr=head;
        if (!head)
            return NULL;
        while(curr)
        {
            if(curr->val < x)
            {
                if(small)
                    small->next = curr;
                if(smallhead == NULL)
                    smallhead = curr;
                small = curr;
            }
            else
            {
                if(large)
                    large->next = curr;
                if(!largehead)
                    largehead = curr;
                large = curr;
            }
            curr = curr->next;
        }
        if(large)
            large->next = NULL;
        if(!smallhead)
            return largehead;
        else
            small->next = largehead;
        return smallhead;
        
    }
};
