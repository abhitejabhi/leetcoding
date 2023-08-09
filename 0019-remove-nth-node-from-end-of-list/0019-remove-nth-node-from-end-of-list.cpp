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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode *temp = head;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        if (n == cnt) {
            return head->next;
        }
        int deletenode = cnt - n;
        temp = head;
        for (int i = 0; i < deletenode - 1; i++) {  // Fix the loop condition here
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};
