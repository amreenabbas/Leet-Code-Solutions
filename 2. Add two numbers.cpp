Question Link : https://leetcode.com/problems/add-two-numbers/submissions/

//Solution by Amreen

/**
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*c1=l1,*c2=l2,*res=NULL,*head=NULL,*prev=NULL;
        int sum=0,carry=0;
        if(!l1 &&!l2)
            return NULL;
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        while(c1||c2)
        {
            int a = c1==NULL?0:c1->val;
            int b = c2==NULL?0:c2->val;
            sum=a+b+carry;
            carry=sum/10;
            sum=sum%10;
            res = new ListNode(sum);
            if(!head)
                head = res;
            else
                prev->next = res;
            prev = res;
            c1 = c1!=NULL?c1->next:c1;;
            c2 = c2!=NULL?c2->next:c2;
            
        }
        if(carry)
            res->next = new ListNode(carry);
        return head;
    }

};
