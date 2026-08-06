class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
         ListNode* a=new ListNode(200);
                 ListNode* tempa=a;
                 ListNode* b=new ListNode(400);
                 ListNode* tempb=b;
                ListNode* temp=head;
                int n=1;
                while(temp!=NULL){
                    if(n%2!=0){    
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
                    n++;
                }
                tempa->next=b->next;
                return a->next;
    }
};