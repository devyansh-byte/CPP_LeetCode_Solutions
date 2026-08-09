class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return head->next;
        ListNode* slow=head;
        ListNode* fast=head->next;
       while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
       }
       slow->next=slow->next->next;
       return head;
    }
};