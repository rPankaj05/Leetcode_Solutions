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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forward=NULL;
        
        if(head->next==NULL) return head;
        
        int cnt=1;
        while(cnt<left){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
       
        ListNode* temp=prev;
        ListNode* temp2=curr;
        while(cnt<=right){
           forward=curr->next;
           curr->next=prev;
           prev=curr;
           curr=forward;
           cnt++;
        }
        temp2->next=curr;
       if(temp!=NULL) temp->next=prev;
       else   head=prev;
        return head;
    }
};