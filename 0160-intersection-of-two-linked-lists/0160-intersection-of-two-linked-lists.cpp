class Solution {
public:
    ListNode *getIntersectionNode(ListNode *heada, ListNode *headb) {
        ListNode* temp1=heada;
       ListNode* temp2=headb;
       int l1=0;
       int l2=0;
       while(temp1!=NULL){
        temp1=temp1->next;
        l1++;
       }
         while(temp2!=NULL){
        temp2=temp2->next;
        l2++;
       }
     if(l2>l1){
        int idx2=(l2-l1);
        for(int i=1;i<=idx2;i++){
            headb=headb->next;
        }
         while(heada!=NULL && headb!=NULL){
            if(heada==headb) return heada;
            else{
                heada=heada->next;
                headb=headb->next;
            }
        }
       }
       else{ //l1>=l2
          int idx1=abs(l1-l2);
        for(int i=1;i<=idx1;i++){
            heada=heada->next;
        }
       
        while(heada!=NULL && headb!=NULL){
            if(heada==headb) return heada;
            else{
                heada=heada->next;
                headb=headb->next;
            }
            }
        }
    
         return NULL;
    }
};