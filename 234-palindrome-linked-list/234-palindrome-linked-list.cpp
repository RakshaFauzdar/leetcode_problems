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
    bool is(string s)
    {
        int n=s.length();
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                return false;
            }
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        string s;
        while(head)
        {
            s+=to_string(head->val);
            head=head->next;
        }
        
        return is(s);
        
    }
};