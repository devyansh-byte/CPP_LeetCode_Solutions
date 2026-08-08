class Solution {
public:
ListNode* reverse(ListNode* head , ListNode* finish){
 if(head==NULL || head->next==NULL) return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nxt=head->next;
        while(curr!=finish){
            curr->next=prev;
            prev=curr;
            curr=nxt;
           if(nxt!=NULL) nxt=nxt->next;
        }
        return prev;
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right || head==NULL || head->next==NULL) return head;
         ListNode* temp=head;
         int n=0;
         while(temp!=NULL){
           temp=temp->next;
           n++;
         }//we get our exact size.
         bool flagst=true;
         bool flaged=true;
         int stidx=-1;
         int edidx=-1;
          ListNode* end1=NULL;
          ListNode* start=NULL;
        if(left==1){
           ListNode* start=NULL;
           flagst=false;
        }
        else   stidx=left-1;
       if(right==n){
        ListNode* end1=NULL;
        flaged=false;
       } 
        else  edidx=right+1; 
         ListNode* temp2=head;
         ListNode* left1=NULL;
         ListNode* right1=NULL;
         for(int i=1;i<=n;i++){
            if(flagst==true && i==stidx) start=temp2;
            if(flaged==true && i==edidx) end1=temp2;
            if(i==left)  left1=temp2;
             if(i==right) right1=temp2;
             temp2=temp2->next;
         }
         right1= reverse(left1,right1->next);
         if(start!=NULL) start->next=right1;
         if(end1!=NULL) left1->next=end1;
         if (left == 1) return right1;
          return head;
    }
};