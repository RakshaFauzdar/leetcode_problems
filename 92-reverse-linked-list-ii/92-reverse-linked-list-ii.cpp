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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       
        
        ListNode*prev=NULL;
        ListNode*curr=head;
        for(int i=1;i<left && curr!=NULL;i++)
        {
            prev=curr;
            curr=curr->next;
        }
        ListNode*s=curr;
        ListNode*e=NULL;
        for(int i=1;curr!=NULL && i<=right-left+1;i++)
        {
            ListNode*next=curr->next;
            curr->next=e;
            e=curr;
            curr=next;
            
        }
        if(s)
        {
            s->next=curr;
            if(prev!=NULL)
            {
                prev->next=e;
            }
            else
            {
                head=e;
            }
        }
        return head;
    }
};