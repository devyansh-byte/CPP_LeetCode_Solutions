class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //method 1
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        if(n==count){
            head=head->next;
            return head;
        }
        int idx= count-n;
        temp=head;
        int cnt=1;
        while(cnt<idx){
            temp=temp->next;
            cnt++;
        }
        temp->next=temp->next->next;
        return head;;

    }
};