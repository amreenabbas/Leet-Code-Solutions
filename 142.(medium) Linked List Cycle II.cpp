//https://leetcode.com/problems/linked-list-cycle-ii/
//created by js0805
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        bool p=false;
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast && fast->next)
        {
            slow = slow ->next;
            fast = fast->next->next;
            if(slow == fast)
            { p = true;
             break;
            }
        }
        if(p == true)
        {slow = head;
            while(slow!=fast)
            {
                slow = slow ->next;
                fast = fast->next;
            }
            return slow;
        }
        return NULL;
    }
};
