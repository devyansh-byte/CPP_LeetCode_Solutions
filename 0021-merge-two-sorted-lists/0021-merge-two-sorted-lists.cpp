class Solution {
public:
    ListNode* mergeTwoLists(ListNode* heada, ListNode* headb) {
        ListNode* c=new ListNode(100);
         ListNode* tc=c;

        while(heada!=NULL && headb!=NULL){
            if(heada->val<=headb->val){
                tc->next=heada;
                tc=heada;
                heada=heada->next;
            }
            else{
                tc->next=headb;
                tc=headb;
                headb=headb->next;
            }
        }
        if(heada==NULL)  tc->next=headb;
         else    tc->next=heada;
        return c->next;
    }
};