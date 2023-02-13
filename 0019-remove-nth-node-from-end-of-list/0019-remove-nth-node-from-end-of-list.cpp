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
        if(head==NULL)
        {
            return NULL;
        }
        ListNode *temp1,*temp2;
        temp1=head;
        int count=0;
        while(temp1!=NULL)
        {
            count++;
            temp1=temp1->next;
        }
        if(n==count)
        {
            head=head->next;
            return head;
        }
        count=count-n;
        temp2=head;
        int i=1;
        while(i<count)
        {
            temp2=temp2->next;
            i++;
        }
        temp2->next=temp2->next->next;
        return head;
        
    }
};