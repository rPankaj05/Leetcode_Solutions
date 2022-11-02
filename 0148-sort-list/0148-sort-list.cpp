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

/*
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* curr=head;
        vector<int> v;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
         }
      sort(v.begin(),v.end());
      int i=0;
      curr=head;
        while(curr!=NULL){
            curr->val=v[i++];
            curr=curr->next;
            
        }
        return head;
    }
};

*/

class Solution {
public:
     ListNode* middle(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    
    ListNode* merge(ListNode* left, ListNode* right){
        if(left==NULL) return right;
        if(right==NULL) return left;
        ListNode* ans= new ListNode(-1);
        ListNode* tmp=ans;
        while(left!=NULL and right!=NULL){
            if(left->val<right->val){
                tmp->next=left;
                tmp=left;
                left=left->next;
            }
        else {
            tmp->next=right;
            tmp=right;
            right=right->next;
          }
        }
       
        if(left==NULL) tmp->next=right;
        if(right==NULL) tmp->next=left;
        
        return ans->next;
        
    }
    
    
    
    
    
    ListNode* sortList(ListNode* head) {
       if(head==NULL || head->next==NULL) return head;
        
        ListNode* mid=middle(head);
        
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=NULL;
        
        left=sortList(left);
        right=sortList(right);
        
       return merge(left,right);
    }
};