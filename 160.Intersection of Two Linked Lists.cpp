Question Link : https://leetcode.com/problems/intersection-of-two-linked-lists/

//created by js0805

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* head1 = headA;
        ListNode* head2 = headB;

        int length_A = 0, length_B = 0;

        // Find the length of both the lists
        while(head1 && head2){
            head1 = head1->next;
            head2 = head2->next;
            length_A++;
            length_B++;
        }
        while(head1){
            head1 = head1->next;
            length_A++;
        }
        while(head2){
            head2 = head2->next;
            length_B++;
        }
		// Reset the head pointers
        head1 = headA;
        head2 = headB;

         // Head Start to longer list
        int diff;
        if(length_A > length_B){
            diff = length_A - length_B;
            while(diff--)
                head1 = head1->next;
        }else {
            diff = length_B - length_A;
            while(diff--)
                head2 = head2->next;
        }

        // Find the intersection point
        while(head1 && head2){
            if(head1 == head2)
                return head1;
            head1 = head1->next;
            head2 = head2->next;
        }
        return NULL;
    }
};

//Solution by Amreen

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1=headA,*p2=headB;
        int it = 0;
        if(p1 == NULL || p2 == NULL)
            return NULL;
        while(p1!=p2 && it<3)
        {
            p1 = p1->next;
            p2 = p2->next;
            if(p1 == NULL){
                p1 = headB;
                it++;}
            if(p2 == NULL)
                p2 = headA;
            if(p1==p2)
                return p1;
        }
        if(it>=2)
            return NULL;
        return p1;
    }
};
