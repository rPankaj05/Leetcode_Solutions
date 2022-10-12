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
    
    int findLength(ListNode* head){
        int cnt=0;
        ListNode * curr=head;
        while(curr!=NULL){
            curr=curr->next;
            cnt++;
        }
        return cnt;
    }
    
    
    
    ListNode* solve(ListNode* head,int k,int length){
       
        if(length<k) return head;
        
         ListNode* prev=NULL , *forward=NULL;
        ListNode* curr=head;
        
        int cnt=0;
         while(curr!=NULL and cnt<k){
             forward=curr->next;
             curr->next=prev;
             prev=curr;
             curr=forward;
             cnt++;
         }
      
        if(forward!=NULL){
            head->next=reverseKGroup(forward,k);
        }
        
        return prev;
        
    }
    
    
    
     
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        int l=findLength(head);
        
       return  solve(head,k,l);
       
    }
};