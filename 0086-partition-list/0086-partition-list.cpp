class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
                ListNode* a=new ListNode(200);
                 ListNode* tempa=a;
                 ListNode* b=new ListNode(400);
                 ListNode* tempb=b;
                ListNode* temp=head;
                while(temp!=NULL){
                    if(temp->val<x){    
                ListNode* t=new ListNode(temp->val);
                tempa->next=t;
                tempa=t;
                    }
                    else {
                     ListNode* m=new ListNode(temp->val);
                tempb->next=m;
                tempb=m;
                    }
                    temp=temp->next;
                }
                tempa->next=b->next;
                return a->next;
    }
};