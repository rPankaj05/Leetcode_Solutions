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
    ListNode* getMid(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head->next;
    while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
     }
    
    ListNode* reverse(ListNode * head){
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    
public:
    void reorderList(ListNode* head) {
        
        if(head->next==NULL || head->next->next==NULL) return ;
        
        ListNode* middle=getMid(head);
        ListNode* head1=reverse(middle->next);
        middle->next=NULL;
        
        while(head!=NULL and head1!=NULL){
            ListNode* forward1=head->next;
            ListNode* forward2=head1->next;
            head->next=head1;
            head1->next=forward1;
            head=forward1;
            head1=forward2;
        }
      
       
        return;
    }
};