//https://leetcode.com/problems/linked-list-cycle/
//created by js0805
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *t1 = head;
        ListNode *t2 = head;
        while(t2!=NULL && t2->next!=NULL)
        {
            t1 = t1->next;
            t2 = t2->next->next;
            if(t1==t2)
                return true;
            
        }
        return false;
    }
};
