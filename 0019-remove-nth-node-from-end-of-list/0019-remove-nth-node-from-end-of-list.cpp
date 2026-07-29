class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      //method 2
         ListNode* temp=head;
         ListNode* slow=head;
         ListNode* fast=head;
       for(int i=0;i<n+1;i++){
             if(fast==NULL){
                return head->next;
             }
       fast=fast->next;
         }
         while(fast!=NULL){
             fast=fast->next;
              slow=slow->next;
         }
         slow->next=slow->next->next;
         return head;
    }
};