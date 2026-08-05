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
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        int n=arr.size();
        if(n==0) return NULL;
        while(arr.size()>1){
            ListNode* a=arr[arr.size()-1];
            arr.pop_back();
            ListNode* b=arr[arr.size()-1];
            arr.pop_back();
           arr.push_back(merge(a,b));
        }
        return arr[0];
    }
};