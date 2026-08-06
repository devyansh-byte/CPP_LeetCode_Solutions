class Solution {
public:
 ListNode* merge(ListNode* heada, ListNode* headb) {
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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* slow=head;
         ListNode* fast=head;
            while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            }
            //now slow apne left node pr hai.
            ListNode* first=head;
            ListNode* second=slow->next;
            slow->next=NULL;
            // now two list tyar hai.
           first = sortList(first);
            second = sortList(second);
             ListNode* c=merge(first,second);
           return c;

    }
};