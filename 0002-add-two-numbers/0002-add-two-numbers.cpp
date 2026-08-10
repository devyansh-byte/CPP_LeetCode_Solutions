class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* f=new ListNode(200);
          ListNode* temp=f;
        while(l1!=NULL && l2!=NULL){
            if((l1->val+l2->val)<=9){
                ListNode* m=new ListNode(l1->val+l2->val);
                 temp->next=m;
                 temp=m;
            }
            else{//means sum of both no are greater than 9.
              int a=(l1->val+l2->val)-10;
              int b=1;
               ListNode* l=new ListNode(a);
               temp->next=l;
                temp=l;
                if(l1->next!=NULL){
                    l1->next->val=1 + l1->next->val;
                }
                else if(l2->next!=NULL){
                    l2->next->val=1 + l2->next->val;
                }
                else{
                    ListNode* p=new ListNode(1);
                      temp->next=p;
                temp=p;
                }
               
            }
            l1=l1->next;
            l2=l2->next;
        }
       if(l1==NULL){
    while(l2!=NULL){
            if(l2->val>9){
        int b=l2->val-10;
        ListNode* l=new ListNode(b);
       temp->next=l;
        temp=l;
        if(l2->next!=NULL){
            l2->next->val=1 + l2->next->val;
        }
        else{
            ListNode* p=new ListNode(1);
            temp->next=p;
            temp=p;
        }
    }
    else{
         temp->next=l2;
        temp=l2;
    }
    l2=l2->next;
    }
}
         if(l2==NULL){
    while(l1!=NULL){
           if(l1->val>9){
        int b=l1->val-10;
        ListNode* l=new ListNode(b);
       temp->next=l;
        temp=l;
        if(l1->next!=NULL){
            l1->next->val=1 + l1->next->val;
        }
        else{
            ListNode* p=new ListNode(1);
            temp->next=p;
            temp=p;
        }
    }
  else{
     temp->next=l1;
        temp=l1;
  }
  l1=l1->next;
    }
}
        return f->next;
    }
};