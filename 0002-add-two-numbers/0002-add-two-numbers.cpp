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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        
        ListNode* ans=new ListNode(-1);
        ListNode* curr=ans;
        int carry=0;
        while(l1!=NULL and l2!=NULL){
            int tmp=l1->val+l2->val+carry;
            ListNode* temp=new ListNode(tmp%10);
            carry=tmp/10;
            curr->next=temp;
            curr=temp;
            l1=l1->next;
            l2=l2->next;
        }
       while(l1!=NULL){
           int tmp=l1->val+carry;
           ListNode* temp=new ListNode(tmp%10);
           carry=tmp/10;
           curr->next=temp;
           curr=temp;
           l1=l1->next;
       }
        
        while(l2!=NULL){
           int tmp=l2->val+carry;
           ListNode* temp=new ListNode(tmp%10);
           carry=tmp/10;
           curr->next=temp;
           curr=temp;
           l2=l2->next;
       } 
        if(carry>0){
         ListNode* temp=new ListNode(carry);
         curr->next=temp;
            curr=curr->next;
        }
       
        return ans->next;
        
    }
};