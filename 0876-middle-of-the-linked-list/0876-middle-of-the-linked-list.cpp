/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int cnt=1;
        while(temp->next!=NULL){
            temp=temp->next;
            cnt++;
    }
     ListNode* temp2=head;
     int idx=0;
     while(idx<cnt/2) {
        temp2=temp2->next;
        idx++;
        }

        return temp2;
     }

};