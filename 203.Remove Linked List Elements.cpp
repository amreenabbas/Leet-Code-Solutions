Question Link : https://leetcode.com/problems/remove-linked-list-elements/

//created by js0805

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


//Alternate solution by Amreen

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr=head;
        ListNode* prev = head;
        while(curr)
        {
            if(curr->val == val and curr==head)
                head = curr->next;
            else if(curr->val == val)
                prev->next = curr->next;
            else
                prev = curr;
            curr = curr->next;
        }
        return head;
    }
};
