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
    
    int getLength(ListNode* head){
        int cnt=0;
        ListNode* curr=head;
        while(curr!=NULL){
            curr=curr->next;
            cnt++;
        }
        return cnt;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=getLength(head);
        int cnt=1;
        if(l==1) return NULL;
        if(n==l) { head=head->next; return head; }
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(cnt<l-n+1){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        return head;
    }
};