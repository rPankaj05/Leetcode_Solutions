/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
         map<ListNode*, int > mp;
       while(head1!=NULL){
           mp[head1]++;
           head1=head1->next;
       }
       while(head2!=NULL){
           if(mp[head2]>0) return head2;
           head2=head2->next;
           
       }
       return NULL;
    }
};