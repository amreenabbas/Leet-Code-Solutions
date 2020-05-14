//https://leetcode.com/problems/middle-of-the-linked-list/
//created by js0805
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* t1 = head;
        ListNode* t2 = head;
        while( t1 && t1->next)
        {
            t1 = t1 ->next->next;
            t2 = t2->next;
        }
        
        return t2;
    }
};
