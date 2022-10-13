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
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        
        unordered_map<int,int> mp;
        
        while(curr!=NULL){
            if(mp[curr->val]==1){
                ListNode* temp=curr;
                curr=curr->next;
                prev->next=curr;
                temp->next=NULL;
                delete temp;
            }
            
            else{
                mp[curr->val]=1;
                prev=curr;
                curr=curr->next;
            }
        }
        
        return head;
    }
};