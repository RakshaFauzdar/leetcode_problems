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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*curr=head;
        int c=0;
        while(curr)
        {
            c++;
            curr=curr->next;
        }
        
        
        if(c<k)
            return head;
        
        curr=head;
        ListNode*prev=NULL;
        ListNode*next;
        for(int i=0;i<k;i++)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head->next=reverseKGroup(curr,k);
        return prev;
        
        
        
    }
};