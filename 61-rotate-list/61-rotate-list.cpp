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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
        {
            return head;
        }
        ListNode*curr=head;
        int c=0;
        while(curr!=NULL)
        {
            c++;
            curr=curr->next;
            
        }
        k=k%c;
        ListNode*p=head,*tail=head;
        
        
        for(int i=0;i<k;i++)
        {
            while(tail->next!=NULL)
            {
                p=tail;
                tail=tail->next;
            }
            
            
            p->next=NULL;
            tail->next=head;
            head=tail;
        }
        
        
        return head;
        
    }
};