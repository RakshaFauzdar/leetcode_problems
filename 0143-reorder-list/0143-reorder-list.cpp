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
    void reorderList(ListNode* head) {
        
        
        ListNode*curr=head;
        vector<ListNode*>v;
        while(curr)
        {
            v.push_back(curr);
            curr=curr->next;
        }
        
        int n=v.size();
        curr=head;
        int i;
        for(i=0;i<n/2;i++)
        {
            curr->next=v[i];
            curr=curr->next;
            
            
            curr->next=v[n-i-1];
            curr=curr->next;
        }
        
        if(n%2==1)
        {
            curr->next=v[i];
            curr=curr->next;
        }
        curr->next=NULL;
        
    }
};