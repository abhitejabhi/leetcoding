class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        
        // Move temp1 to the k-th node
        for (int i = 1; i < k; i++) {
            temp1 = temp1->next;
        }
        
        ListNode* kthNode = temp1;
        
        // Move temp2 to the (n-k+1)th node
        ListNode* temp = head;
        int cnt = 0;
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }
        for (int i = 1; i < cnt - k + 1; i++) {
            temp2 = temp2->next;
        }
        
        // Swap the values of kthNode and temp2
        int tempVal = kthNode->val;
        kthNode->val = temp2->val;
        temp2->val = tempVal;
        
        return head;
    }
};
