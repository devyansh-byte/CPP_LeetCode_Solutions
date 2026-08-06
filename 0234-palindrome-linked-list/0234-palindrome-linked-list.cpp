class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL){
             n++;
              temp=temp->next;
        }
         ListNode* prev=NULL;
          ListNode* curr=head;
           ListNode* nxt=head->next;
           if(n%2==0){
       for(int i=0;i<n/2;i++){
        curr->next=prev;
        prev=curr;
        curr=nxt;
        nxt=nxt->next;
       }
       while(prev!=NULL){
        if(prev->val!=curr->val) return false;
        prev=prev->next;
        curr=curr->next;
       }
           }
           else{
            for(int i=0;i<n/2;i++){
        curr->next=prev;
        prev=curr;
        curr=nxt;
        nxt=nxt->next;
       }
       while(prev!=NULL){
        if(prev->val!=nxt->val) return false;
        prev=prev->next;
        nxt=nxt->next;
       }
           }
           return true;
    }
};