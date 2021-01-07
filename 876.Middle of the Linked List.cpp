Question Link : https://leetcode.com/problems/middle-of-the-linked-list/

//Solution by js0805
/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

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


// Solution by Amreen

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        int t =0;
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
        }
        if(fast->next!=NULL)
        {
            slow = slow->next;
        }
        return slow;
    }
};
