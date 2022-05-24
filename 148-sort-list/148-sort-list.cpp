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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode*curr=head;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast && fast->next)
        {
            curr=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        curr->next=NULL;
            ListNode*l1=sortList(head);
        ListNode*l2=sortList(slow);
        
        
        return  merge(l1,l2);
    }
    
    ListNode*merge(ListNode*l1,ListNode*l2)
    {
        ListNode*curr=new ListNode(0);
        ListNode*p=curr;
        while(l1 && l2)
        {
            if(l2->val<=l1->val)
            {
                p->next=l2;
                l2=l2->next;
            }
            else
            {
                p->next=l1;
                l1=l1->next;
            }
            p=p->next;
        }
        if(l1)
        {
            p->next=l1;
            l1=l1->next;
        }
        
        if(l2)
        {
            p->next=l2;
            l2=l2->next;
        }
       
        return curr->next;
    }
};