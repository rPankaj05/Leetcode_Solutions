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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL;
        
        ListNode* slow=head , *prev=NULL;
        ListNode* fast=head;
        
        while(fast->next!=NULL){
           fast=fast->next;
            if(fast->next!=NULL) fast=fast->next;
            prev=slow;
            slow=slow->next;
        }
        ListNode *temp=slow;
        prev->next=slow->next;
        temp->next=NULL;
        delete temp;
        return head;
        
    }
};