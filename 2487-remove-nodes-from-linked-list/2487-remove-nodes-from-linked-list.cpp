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
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL||head->next==NULL)
        {
            return head;
            
        }
        ListNode*nn=removeNodes(head->next);
        if(nn->val>head->val)
        {
            return nn;
        }
        head->next=nn;
        return head;
    }
};