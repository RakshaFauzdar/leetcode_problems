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
    ListNode* partition(ListNode* head, int x) {
        ListNode*curr=head;
        ListNode*p=new ListNode(0);
        ListNode*p1=new ListNode(0);
        ListNode*ptr=p;
        ListNode*ptr1=p1;
        while(curr)
        {
            if(curr->val<x)
            {
                
                
                ptr->next=curr;
                ptr=ptr->next;
            }
            else
            {
                ptr1->next=curr;
                ptr1=ptr1->next;
            }
            curr=curr->next;
            
        }
        ptr1->next=NULL;
        ptr->next=p1->next;
        return p->next;
        
       
    }
};