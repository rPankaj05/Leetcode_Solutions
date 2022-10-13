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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        
        int x=head->val;
        int y=head->next->val;
        
        if(x==y){
            while(head!=NULL and head->val==x){
                head=head->next;
            }
           return deleteDuplicates(head);
        }
        
        else head->next= deleteDuplicates(head->next);
        
        return head;
    }
};