
class Solution {
public:
ListNode* reversell(ListNode* head){
      if(head==NULL || head->next==NULL) return head;
       ListNode* newhead = reversell(head->next);
       head->next->next=head;
       head->next=NULL;
       return newhead;
    
}
    bool isPalindrome(ListNode* head) {
        ListNode* t=new ListNode(200);
         ListNode* tempt=t;
         ListNode* temp1=head;
         while(temp1!=NULL){
             ListNode* m=new ListNode(temp1->val);
           tempt->next=m;
           tempt=m;
           temp1=temp1->next;
         }
        ListNode* newll=reversell(t->next);
        ListNode* temp=head;
        while(temp!=NULL){
            if(newll->val!= temp->val){
                return false;
            }
            newll=newll->next;
            temp=temp->next;
        }
        return true;
    }
};