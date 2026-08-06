class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* curr=head;
         ListNode* prev=NULL;
          ListNode* nxt=head->next;
          while(curr!=NULL){
            curr->next=prev;
            prev=curr;
            curr=nxt;
           if(nxt!=NULL) nxt=nxt->next;
          }
          return prev;
    }
};