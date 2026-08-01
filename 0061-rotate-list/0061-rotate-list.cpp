class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        if(head==NULL || head->next==NULL) return head;
        if(head->next->next==NULL){
            if(k%2!=0){
                head->next->next=head;
              head=head->next;
              temp->next=NULL;
              return head;
            }
            else return head;
        }
        int n=1;
        while(temp!=NULL && temp->next!=NULL){
            temp=temp->next;
            n++;
        }
         if(k%n==0) return head;
      temp->next=head;
      //now we create a cycle.
      if(k%n==0) return head;
      int m=k%n;
      int idx=n-m+1;
       temp=head;
      int cnt=1;
      while(cnt<idx){
        head=head->next;
        if(cnt<idx-1) temp=temp->next;
        cnt++;
      }
         ListNode* temp2=head;
      while(temp2!=temp){
        temp2=temp2->next;
      }
      temp2->next=NULL;
            return head;
    }
   
};