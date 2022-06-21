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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool is(ListNode*head,TreeNode*root)
    {
//         it will check if there exisys a path form curr root node having the linked list
        if(head==NULL)return true;
        if(root==NULL)return false;
        
        if(root->val==head->val)
        {
            return is(head->next,root->left) || is(head->next,root->right);
        }
        else
        {
            return false;
        }
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        bool flag=false;
//         flag to check if there exists a path
        if(head==NULL)return true;
        if(root==NULL)return false;
        if(head->val==root->val)
        {
//             recusrive call to check next node of linked list
            flag=is(head->next,root->left) || is(head->next,root->right);
        }
//         recursive call for next elemenet of the binary tree
        
        return flag || isSubPath(head,root->left) || isSubPath(head,root->right);
        
    }
//     time -O(m*n)
//     space-O(1)
};